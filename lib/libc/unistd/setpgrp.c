/*
** Copyright 2004 Travis Geiselbrecht. All rights reserved.
** Distributed under the terms of the NewOS License.
*/
#include <unistd.h>
#include <errno.h>
#include <sys/syscalls.h>

int 
setpgrp(void)
{
	return _kern_setpgid((proc_id)0, (pgrp_id)0);
}

