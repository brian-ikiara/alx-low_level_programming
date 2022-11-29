	global	_start
	global _end

	section	.text
_start:	mov	rax, 1
	mov	rdi, 1
	mov	rsi, msg
	mov	rsi, nl
	mov	rdx, 18
	syscall
	mov	rax, 60
	xor	rdi, rdi
	syscall

	section	.data
msg:	db	"Hello, Holberton!", 14
nl:	db	10
