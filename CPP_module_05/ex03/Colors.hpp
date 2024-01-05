/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Colors.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: virginiefusterperez <virginiefusterperez@s +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:19:18 by virginiefusterpe  #+#    #+#             */
/*   Updated: 2023/12/27 21:55:28 by virginiefusterpe ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_HPP
#define COLORS_HPP

#include <string>

const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string MAGENTA = "\033[35m";
const std::string CYAN = "\033[36m";
const std::string RESET = "\033[0m";

const std::string LIGHT_RED = "\033[91m";
const std::string LIGHT_GREEN = "\033[92m";
const std::string LIGHT_YELLOW = "\033[93m";
const std::string LIGHT_BLUE = "\033[94m";
const std::string LIGHT_MAGENTA = "\033[95m";
const std::string LIGHT_CYAN = "\033[96m";

const std::string BLACK = "\033[30m";
const std::string WHITE = "\033[97m";
const std::string GRAY = "\033[90m";

#endif

