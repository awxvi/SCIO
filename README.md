# SCIO
## Simple C IO

<br>

### Why?
When i was developing [rayclick](https://github.com/awxvi/rayclick) i found that i needed to reinvent the wheel for file read / writing which was unideal.

<br>

So to combat this issue i have created a simple header++ library to ease with this.

### How?
It should be as simple as including the header then:

<br>

        scio::io <name>

<br>

following that, to write:

<br>

        <name>.tofile( "test test", "test.txt" );
    
<br>

to read:

<br>

        <name>.readFile("test.txt"); // returns the file contents as string

<br>

Enjoy.