	.file	"swap_in_array.c"
	.text
	.section	.rodata
.LC0:
	.string	"array elements for swapping:"
.LC1:
	.string	"%d"
	.align 8
.LC2:
	.string	" after swaping array elements:"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$80, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -68(%rbp)
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	movl	$0, -76(%rbp)
	jmp	.L2
.L3:
	leaq	-64(%rbp), %rax
	movl	-76(%rbp), %edx
	movslq	%edx, %rdx
	salq	$2, %rdx
	addq	%rdx, %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	addl	$1, -76(%rbp)
.L2:
	cmpl	$4, -76(%rbp)
	jle	.L3
	movl	$0, -76(%rbp)
	movl	$9, -72(%rbp)
	jmp	.L4
.L5:
	movl	-76(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %eax
	movl	%eax, -68(%rbp)
	movl	-72(%rbp), %eax
	cltq
	movl	-32(%rbp,%rax,4), %edx
	movl	-76(%rbp), %eax
	cltq
	movl	%edx, -64(%rbp,%rax,4)
	movl	-72(%rbp), %eax
	cltq
	movl	-68(%rbp), %edx
	movl	%edx, -32(%rbp,%rax,4)
	addl	$1, -76(%rbp)
	subl	$1, -72(%rbp)
.L4:
	movl	-76(%rbp), %eax
	cmpl	-72(%rbp), %eax
	jl	.L5
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	movl	$0, -76(%rbp)
	jmp	.L6
.L7:
	movl	-76(%rbp), %eax
	cltq
	movl	-64(%rbp,%rax,4), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -76(%rbp)
.L6:
	cmpl	$4, -76(%rbp)
	jle	.L7
	movl	$10, %edi
	call	putchar@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L9
	call	__stack_chk_fail@PLT
.L9:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
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
