<h1 align=center>
	<b>42cursus</b>
</h1>

<div align=center>
	<h2>
		<i>get next line</i>
	</h2>
	<img src="https://github.com/GiovannaCoqueiro/42cursus-get-next-line/assets/115947494/20a982a3-4d8e-4c6f-aa9b-4eafa6888bd6" alt=get next line badge/>
	<p align=center>
    		Inside this repository, you can see all the code that has been created for the libft project, including the mandatory part as well as the bonus part.
	</p>
</div>

---

<div align=center>
	<h2>
		Final score
	</h2>
	<img src="https://github.com/GiovannaCoqueiro/42cursus-get-next-line/assets/115947494/d7867219-e650-49dd-9f4e-07da8b8ffda9" alt=get next line grade/>
</div>

---

<h3 align=left>
    Mandatory
</h3>
<p>
    Write a function that will read a line at a time from a file opened.
</p>

| File | Description |
| :--- | :--- |
| [get.next_line.c](https://github.com/GiovannaCoqueiro/42cursus-get-next-line/blob/main/get_next_line.c) | Function where the file is read and the current line is separeted and returned |
| [get_next_line_utils.c](https://github.com/GiovannaCoqueiro/42cursus-get-next-line/blob/main/get_next_line.c) | Helper functions from libft |
| [get_next_line.h](https://github.com/GiovannaCoqueiro/42cursus-get-next-line/blob/main/get_next_line.h) | Header file |

<h3 align=left>
    Bonus
</h3>
<p>
    Write a function that will read a line at a time from 'n' files opened at the same time.
</p>

| File | Description |
| :--- | :--- |
| [get.next_line_bonus.c](https://github.com/GiovannaCoqueiro/42cursus-get-next-line/blob/main/get_next_line_bonus.c) | Function where the file is read and the current line is separeted and returned |
| [get_next_line_utils_bonus.c](https://github.com/GiovannaCoqueiro/42cursus-get-next-line/blob/main/get_next_line_utils_bonus.c) | Helper functions from libft |
| [get_next_line_bonus.h](https://github.com/GiovannaCoqueiro/42cursus-get-next-line/blob/main/get_next_line_bonus.h) | Header file |

---

<h2>
    Instructions to use
</h2>
Clone this repository in you local computer using a terminal:
- $> git clone https://github.com/GiovannaCoqueiro/42cursus-get-next-line.git [repository_name]

After succefully cloning the project in your local reposiory you compile the mandatory part using:
- $> -cc -Wall -Wextra -Werror -D BUFFER_SIZE=n <files.c>

And the bonus part using:
- $> -cc -Wall -Wextra -Werror -D BUFFER_SIZE=n <files_bonus.c>

Substitute 'n' with the number of bytes read at a time into the buffer for the read function.
You will also need a <b>main.c</b> file to open a file and a <b>test</b> file to be read.
