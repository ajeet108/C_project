	.file	"evenodd.c"
	.text
	.section	.rodata
.LC0:
	.string	"even"
.LC1:
	.string	"odd"
	.text
	.globl	even_odd
	.type	even_odd, @function
even_odd:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	-4(%rbp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L2
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	jmp	.L3
.L2:
	leaq	.LC1(%rip), %rdi
	call	puts@PLT
.L3:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	even_odd, .-even_odd
	.section	.rodata
.LC2:
	.string	" enter num value:"
.LC3:
	.string	"%d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	$0, %eax
	call	even_odd
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L6
	call	__stack_chk_fail@PLT
.L6:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.2) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
