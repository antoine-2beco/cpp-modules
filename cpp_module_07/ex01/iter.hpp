/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:27:49 by ade-beco          #+#    #+#             */
/*   Updated: 2025/04/10 13:57:34 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename A, typename F>
void    iter(A &a, int size, F &f) {
    if (!a || !f)
        return;
    for (int i = 0; i < size; i++) {
        f(a[i]);
    }
}

#endif

