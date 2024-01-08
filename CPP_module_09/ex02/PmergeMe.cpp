/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginie <virginie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 21:44:59 by virginie          #+#    #+#             */
/*   Updated: 2024/01/08 22:12:03 by virginie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <sys/time.h>

// Constructeurs, destructeur et opérateur d'affectation
PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe& other) {
    // Copiez les données si nécessaire
}
PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
    if (this != &other) {
        // Copiez les données si nécessaire
    }
    return *this;
}
PmergeMe::~PmergeMe() {}

// Méthodes pour trier et afficher les séquences
void PmergeMe::sortAndDisplay(std::vector<int>& numbers) {
    displaySequence("Before: ", numbers);
    mergeInsertSort(numbers);
    displaySequence("After: ", numbers);
}

void PmergeMe::sortAndDisplay(std::list<int>& numbers) {
    displaySequence("Before: ", numbers);
    mergeInsertSort(numbers);
    displaySequence("After: ", numbers);
}

void PmergeMe::displaySequence(const std::string& text, const std::vector<int>& numbers) {
    std::cout << text;
    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::displaySequence(const std::string& text, const std::list<int>& numbers) {
    std::cout << text;
    for (std::list<int>::const_iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::mergeVector(std::vector<int>& vec, std::vector<int>& left, std::vector<int>& right) {
    int leftIndex = 0, rightIndex = 0, vecIndex = 0;
    int leftSize = left.size(), rightSize = right.size();

    while (leftIndex < leftSize && rightIndex < rightSize) {
        if (left[leftIndex] <= right[rightIndex]) {
            vec[vecIndex++] = left[leftIndex++];
        } else {
            vec[vecIndex++] = right[rightIndex++];
        }
    }

    while (leftIndex < leftSize) {
        vec[vecIndex++] = left[leftIndex++];
    }

    while (rightIndex < rightSize) {
        vec[vecIndex++] = right[rightIndex++];
    }
}

void PmergeMe::sortVector(std::vector<int>& vec) {
    int size = vec.size();
    if (size <= 1) return;  // Base case for recursion

    int mid = size / 2;
    std::vector<int> left(vec.begin(), vec.begin() + mid); // Create left subvector
    std::vector<int> right(vec.begin() + mid, vec.end());  // Create right subvector

    sortVector(left);   // Sort the left subvector
    sortVector(right);  // Sort the right subvector

    mergeVector(vec, left, right); // Merge the sorted subvectors
}

void PmergeMe::mergeLinkedList(std::list<int>& list, std::list<int>& left, std::list<int>& right) {
    list.clear(); // Clear the original list

    std::list<int>::iterator itLeft = left.begin();
    std::list<int>::iterator itRight = right.begin();

    while (itLeft != left.end() && itRight != right.end()) {
        if (*itLeft <= *itRight) {
            list.push_back(*itLeft++);
        } else {
            list.push_back(*itRight++);
        }
    }

    // Append remaining elements (if any) from left and right lists
    while (itLeft != left.end()) {
        list.push_back(*itLeft++);
    }
    while (itRight != right.end()) {
        list.push_back(*itRight++);
    }
}

void PmergeMe::sortLinkedList(std::list<int>& list) {
    if (list.size() <= 1) return; // Base case for recursion

    // Dividing the list into two halves
    std::list<int>::iterator middle = list.begin();
    std::advance(middle, list.size() / 2);

    std::list<int> left(list.begin(), middle);
    std::list<int> right(middle, list.end());

    // Recursive sorting on both halves
    sortLinkedList(left);
    sortLinkedList(right);

    // Merging the two sorted halves
    mergeLinkedList(list, left, right);
}

long long int PmergeMe::getCurrentMicroseconds() {
    struct timeval time;
    gettimeofday(&time, NULL);
    return static_cast<long long int>(time.tv_sec) * 1000000 + time.tv_usec;
}

void PmergeMe::sortAndCompare(std::vector<int>& vec, std::list<int>& list) {
    // Copiez les éléments de vec dans list
    list.assign(vec.begin(), vec.end());

    // Tri et mesure du temps pour std::vector
    long long startTime = getCurrentMicroseconds();
    sortVector(vec);
    long long endTime = getCurrentMicroseconds();
    std::cout << "Time for std::vector: " << (endTime - startTime) << " microseconds." << std::endl;

    // Tri et mesure du temps pour std::list
    startTime = getCurrentMicroseconds();
    sortLinkedList(list);
    endTime = getCurrentMicroseconds();
    std::cout << "Time for std::list: " << (endTime - startTime) << " microseconds." << std::endl;
}





