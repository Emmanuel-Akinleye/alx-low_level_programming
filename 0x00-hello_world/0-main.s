	.file	"0-main.c"
	.intel_syntax noprefix
# GNU C17 (Debian 12.2.0-14) version 12.2.0 (x86_64-linux-gnu)
#	compiled by GNU C version 12.2.0, GMP version 6.2.1, MPFR version 4.1.1-p1, MPC version 1.3.1, isl version isl-0.25-GMP

# warning: MPFR header version 4.1.1-p1 differs from library version 4.2.0.
# GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
# options passed: -masm=intel -mtune=generic -march=x86-64 -Og -fasynchronous-unwind-tables
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Holberton School"
	.text
	.globl	main
	.type	main, @function
main:
.LFB11:
	.cfi_startproc
	sub	rsp, 8	#,
	.cfi_def_cfa_offset 16
# 0-main.c:10: 	printf("Holberton School");
	lea	rdi, .LC0[rip]	# tmp83,
	mov	eax, 0	#,
	call	printf@PLT	#
# 0-main.c:12: }
	mov	eax, 0	#,
	add	rsp, 8	#,
	.cfi_def_cfa_offset 8
	ret	
	.cfi_endproc
.LFE11:
	.size	main, .-main
	.ident	"GCC: (Debian 12.2.0-14) 12.2.0"
	.section	.note.GNU-stack,"",@progbits
