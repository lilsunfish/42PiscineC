# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bauer.sh                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rastle <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/22 20:17:26 by rastle            #+#    #+#              #
#    Updated: 2018/03/22 20:56:17 by rastle           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

grep -i "Nicolas\tbauer"  $1 | egrep -o '.\d{3}.\d{3}.\d{4}'
