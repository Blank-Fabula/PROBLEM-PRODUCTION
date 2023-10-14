<hr/>

# TITLE: Fabula's sacred fire

## PROBLEM LINK
### 　[**[LINK(AScode)]**](http://ascode.org/problem.php?id=1382)

## PROBLEM DESCRIPTION
　Fabula had to make a sacred fire, but he didn't want to make a sacred fire in name only, so he decided to give the task to someone else. The task of making a sacred fire was given to a blacksmith. The book the blacksmith was given contained the ingredients for the sacred fire, but on the page where the picture of the sacred fire was supposed to be, there was no picture, only a description. The blacksmith is stumped by the description, which doesn't make any sense. Help the blacksmith by reading the description and solving the problem so that he can make the sacred fire!

## INPUT DESCRIPTION
　**1.**　Enter with a number between 1 and 26, or Enter with 'EOF'. <br>
　**2.**　Repeat step 1 until the program exits.

## OUTPUT DESCRIPTION
　**1.**　The alphabets used to draw the sacred fire are used in proportion to the value of the number entered. <br>
　**2.**　For example, if the number '1' is entered, only 'A' will be used to draw, and if the number '2' is entered, 'A' and 'B' will be used to draw. <br>
　**3.**　The sacred fire is composed of rhombuses and squares with four sides of equal length. <br>
　**4.**　The sacred fire has some form that is attached to the lower vertex of the rhombus and one side of the square. <br>
　**5.**　Each figure uses the largest alphabet on the outermost side and progressively decreases the alphabet as you move inwards. <br>
　**6.**　At the innermost part, alphabet 'A' is used. <br>
　**7.**　Each time you print a sacred fire, print a single blank line. <br>
　**8.**　If 'EOF' is entered, print 'END.' and exit the program. 

## INPUT EXAMPLE
<details><summary>CLICK ME</summary>
<pre>
<strong>1</strong>
<strong>2</strong>
<strong>3</strong>
<strong>EOF</strong>
</pre>
</details>

## OUTPUT EXAMPLE
　<strong>There is no output example.</strong><br>
　However, if you can't figure it out without an output example, see the hints at the bottom.

## HINT
<details><summary>CLICK ME</summary>
<pre>
A
A<br>
 B
BAB
 B
BBB
BAB
BBB<br>
  C
 CBC
CBABC
 CBC
  C
CCCCC
CBBBC
CBABC
CBBBC
CCCCC<br>
END.
</pre>
</details>

<hr/>
