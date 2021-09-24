/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ssemanco <ssemanco@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/16 22:13:25 by ssemanco      #+#    #+#                 */
/*   Updated: 2021/09/24 15:01:04 by ssemanco      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "libft/libft.h"

# define ERROR -1
# define OK 1

typedef struct s_stack
{
	int					val;
	int					index;
	struct s_stack		*next;
}						t_stack;

t_stack	*parser(int argc, char **argv);
t_stack	*create_list(int argc, char **argv);
int		count_stack(t_stack *stack);
void	print_stack(t_stack *stack);
void	sa(t_stack **a_stack);
void	pb(t_stack **a_stack, t_stack **b_stack);
void	pa(t_stack **a_stack, t_stack **b_stack);
void	ra(t_stack **a_stack);
void	rb(t_stack **b_stack);
void	rr(t_stack **a_stack, t_stack **b_stack);
void	rra(t_stack **a_stack);
void	rrb(t_stack **b_stack);
void	rrr(t_stack **a_stack, t_stack **b_stack);
void	sb(t_stack **b_stack);
int		*stack_to_array(t_stack *stack);
int		*s_to_a(t_stack *stack);
int		get_index(int num, int *arr, int size);
void	assign_index(t_stack *stack);
void	small_sort(t_stack **a_stack, t_stack **b_stack, int argc);
void	sort_3arg(t_stack **a_stack);
void	sort_5arg(t_stack **a_stack, t_stack **b_stack);
void	radix_sort(t_stack **a_stack, t_stack **b_stack);
int		check_order(t_stack *stack);
void	free_stack(t_stack *stack);
int		malloc_stack_fail(void);
int		evaluate_argument(char *arg);
int		check_dupl(t_stack *stack, int value);
int		get_smallest(int *arr, int size);
int		get_biggest(int *arr, int size);

#endif