/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oriabenk <oriabenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:20:46 by oriabenk          #+#    #+#             */
/*   Updated: 2024/10/13 15:37:47 by oriabenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{                   // 1   2   3   4   5   6   7       8   9   10  11 12    13   14
    char *format = "%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%%%%c%%%s%%%d%%%i%%%u%%\t%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%";
    int res1,res2;         //1    2    3   4   5    6   7   8      9     10   11   12   13  14   15   16  17 18 19 20 21  22    
    res1 =    printf(format,'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
    printf("\n");
    res2 = ft_printf(format,'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
    printf("\n");    
    printf("\n quantity \t%d\t-\t%d\n",res1,res2);

    char *format2 = "%s -\t %x ";
    res1 =    printf(format2,"Original",-100);
    printf("\n");
    res2 = ft_printf(format2,"Copypast",-100);
    printf("\n");    
    printf("\n quantity \t%d\t-\t%d\n",res1,res2);
    return (0);
}
