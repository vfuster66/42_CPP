/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginie <virginie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 21:43:41 by virginie          #+#    #+#             */
/*   Updated: 2024/01/08 22:11:01 by virginie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <string>

class PmergeMe {
public:
    PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();

    void sortAndDisplay(std::vector<int>& numbers);
    void sortAndDisplay(std::list<int>& numbers);

private:

    void displaySequence(const std::string& text, const std::vector<int>& numbers);
    void displaySequence(const std::string& text, const std::list<int>& numbers);

    void mergeVector(std::vector<int>& vec, std::vector<int>& left, std::vector<int>& right);
    void sortVector(std::vector<int>& vec);
    void mergeLinkedList(std::list<int>& vec, std::list<int>& left, std::list<int>& right);
    void sortLinkedList(std::list<int>& list);
    long long int getCurrentMicroseconds();
    void sortAndCompare(std::vector<int>& vec, std::list<int>& list);
};

#endif

