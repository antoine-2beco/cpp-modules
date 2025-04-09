/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:32:02 by ade-beco          #+#    #+#             */
/*   Updated: 2025/04/09 16:44:21 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap( T& a, T& b ) {
    T   tmp;
    tmp = b;
    b = a;
    a = tmp;
}

template <typename U>
U const &min( U const &a, U const &b) {
    return (a < b ? a : b);
}

template <typename V>
V const &max( V const &a, V const &b ) {
    return (a > b ? a : b);
}
#endif

