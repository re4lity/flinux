#include <common/errno.h>
#include <common/signal.h>
#include <syscall/sig.h>
#include <syscall/syscall.h>
#include <log.h>

#include <Windows.h>

DEFINE_SYSCALL(alarm, unsigned int, seconds)
{
	log_info("alarm(%d)\n", seconds);
	/* TODO */
	return 0;
}

DEFINE_SYSCALL(kill, pid_t, pid, int, sig)
{
	log_info("kill(%d, %d)\n", pid, sig);
	/* TODO */
	return 0;
}

DEFINE_SYSCALL(personality, unsigned long, persona)
{
	log_info("personality(%d)\n", persona);
	if (persona != 0 && persona != 0xFFFFFFFFU)
	{
		log_error("ERROR: persona != 0");
		return -EINVAL;
	}
	return 0;
}

DEFINE_SYSCALL(rt_sigaction, int, signum, const struct sigaction *, act, struct sigaction *, oldact)
{
	log_info("rt_sigaction(%d, %p, %p)\n", signum, act, oldact);
	/* TODO */
	return 0;
}

DEFINE_SYSCALL(rt_sigprocmask, int, how, const sigset_t *, set, sigset_t *, oldset)
{
	log_info("rt_sigprocmask(%d, 0x%p, 0x%p)\n", how, set, oldset);
	/* TODO */
	return 0;
}
