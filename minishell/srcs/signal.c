#include "../include/minishell.h"

sig_atomic_t	g_sig = 0;

/*
 * Signal handler for SIGINT and SIGQUIT signals.
 */
void	signal_handler(int sig_nbr)
{
	g_sig = sig_nbr;
}

/*
 * Set signal handlers for SIGINT and SIGQUIT signals.
 */
void	set_signals(void)
{
	signal(SIGINT, &signal_handler);
	signal(SIGQUIT, SIG_IGN);
}

/*
 * Unset signal handlers for SIGINT and SIGQUIT signals.
 */
void	unset_signals(void)
{
	signal(SIGQUIT, SIG_DFL);
	signal(SIGINT, SIG_DFL);
}

/*
 * Block signals in parent process.
 */
void	block_signals_in_parent(void)
{
	signal(SIGQUIT, SIG_IGN);
	signal(SIGINT, SIG_IGN);
}
