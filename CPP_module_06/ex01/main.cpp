/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:12:16 by vfuster-          #+#    #+#             */
/*   Updated: 2024/01/05 16:25:05 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

#include "Serializer.hpp"
#include <iostream>
#include <cassert>

int main()
{
	Data data1 = {42};
	Data data2 = {-1};
	Data data3 = {100};

	Data* dataList[] = {&data1, &data2, &data3, NULL};

	for (int i = 0; i < 4; ++i)
	{
		std::cout << "Testing Data " << i << std::endl;

		uintptr_t raw = Serializer::serialize(dataList[i]);

		Data* deserializedData = Serializer::deserialize(raw);

		std::cout << "Original: " << dataList[i] << ", Deserialized: " << deserializedData << std::endl;

		if (dataList[i] != NULL)
		{
			assert(dataList[i]->value == deserializedData->value);

			std::cout << "Data integrity check passed" << std::endl;
		}

		std::cout << std::endl;
	}

	return 0;
}
