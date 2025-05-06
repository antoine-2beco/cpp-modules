/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:17:09 by ade-beco          #+#    #+#             */
/*   Updated: 2025/05/06 11:50:44 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFFIND_HPP
# define EASYFFIND_HPP

# include <algorithm>

template <typename T>
typename T::iterator   easyfind(T& container, int  n) {
    return (std::find(container.begin(), container.end(), n));
}

#endif
