section 	.text
	global    start
	extern    printf
start:
	mov	edi, format
	call	printf
	mov	eax, 0

sextion		.data
	format db 'Hello, Holberton', 0xa, 0

