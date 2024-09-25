# Relisource

## Introduction

For the Junior .NET Developer Position at first there was a 1 hour long written Exam which consisted 3 Questions (SQL Query, Problem Solving, JavaScript-HTML)

## Software Engineering Questions
<details>
<summary>
Select The Company name which has the lowest total emoployee count.

<table>
    <tr>
        <th>Company</th>
        <th>Position</th>
        <th>Employee</th>
    </tr>
    <tr>
        <td>ABC</td>
        <td>blah</td>
        <td>20</td>
    </tr>
    <tr>
        <td>ABC</td>
        <td>blah</td>
        <td>15</td>
    </tr>
    <tr>
        <td>ABC</td>
        <td>blah</td>
        <td>5</td>
    </tr>
    <tr>
        <td>XYZ</td>
        <td>blah</td>
        <td>10</td>
    </tr>
    <tr>
        <td>XYZ</td>
        <td>blah</td>
        <td>12</td>
    </tr>
    <tr>
        <td>XYZ</td>
        <td>blah</td>
        <td>5</td>
    </tr>
    <tr>
        <td>MNO</td>
        <td>blah</td>
        <td>20</td>
    </tr>
    <tr>
        <td>MNO</td>
        <td>blah</td>
        <td>5</td>
    </tr>
</table>
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Problem Solving

There is a food track consisting of cells marked with 0, 1, or other numbers. Here, 0 signifies the cell is not traceable, 1 signifies it is traceable, and any other number represents the destination. Starting from the top-left point, determine the longest path to reach the destination. If no path exists, print -1.
<table>
    <tr>
        <th>1</th>
        <th>1</th>
        <th>1</th>
    </tr>
    <tr>
        <td>1</td>
        <td>0</td>
        <td>1</td>
    </tr>
    <tr>
        <td>1</td>
        <td>9</td>
        <td>1</td>
    </tr>
</table>

</summary>
<hr>
[Answer]
</details>

<details>
<summary>
JavaScript & HTML

Write JavaScript code to check if a button is clicked in an HTML element using an EventListener. Upon clicking, the size of the HTML element should increase by 10%.
</summary>
<hr>
[Answer]
</details>

## Embedded Software Engineering Questions
<details>
<summary>
Problem Solving

Your task is to write a function in the C programming language to find an optimal route cost to a target location inside a maze and return the highest 4 bits (MSB + 3 bits) of the optimal route cost value. Your function should take as input two integer numbers for the starting index on the maze array. An optimal route is defined as a complete path from the start point to the target location that requires the least effort/cost. Diagonal movement in the maze is not allowed. An example maze is given below: 
<table >
    <tr>
        <td>4</td>
        <td>3</td>
        <td>7</td>
        <td>8</td>
        <td>3</td>
        <td>6</td>
        <td>5</td>
        <td>4</td>
        <td style="background-color: grey;">-1</td>
        <td>2</td>
        <td>3</td>
    </tr>
    <tr>
        <td>6</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td>5</td>
        <td>2</td>
        <td style="background-color: #00b300;">0</td>
        <td>94</td>
    </tr>
    <tr>
        <td>7</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td>16</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td>7</td>
        <td>1</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td>5</td>
    </tr>
    <tr>
        <td>1</td>
        <td>15</td>
        <td>25</td>
        <td style="background-color: #00b300;">0</td>
        <td>3</td>
        <td>5</td>
        <td>6</td>
        <td style="background-color: grey;">-1</td>
        <td>6</td>
        <td>2</td>
        <td>6</td>
    </tr>
    <tr>
        <td>9</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td>21</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td>5</td>
        <td style="background-color: grey;">-1</td>
        <td>2</td>
    </tr>
    <tr>
        <td>2</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td>22</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td>5</td>
        <td style="background-color: grey;">-1</td>
        <td>4</td>
        <td style="background-color: grey;">-1</td>
        <td>7</td>
    </tr>
    <tr>
        <td>8</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td>26</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td>5</td>
        <td style="background-color: grey;">-1</td>
        <td>3</td>
        <td style="background-color: grey;">-1</td>
        <td>6</td>
    </tr>
    <tr>
        <td>20</td>
        <td>5</td>
        <td>3</td>
        <td>4</td>
        <td>11</td>
        <td>23</td>
        <td>11</td>
        <td style="background-color: grey;">-1</td>
        <td>2</td>
        <td style="background-color: grey;">-1</td>
        <td>5</td>
    </tr>
    <tr>
        <td>2</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td>20</td>
        <td style="background-color: grey;">-1</td>
        <td>2</td>
        <td style="background-color: grey;">-1</td>
        <td>4</td>
    </tr>
    <tr>
        <td>4</td>
        <td style="background-color: grey;">-1</td>
        <td>4</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: grey;">-1</td>
        <td>4</td>
        <td style="background-color: grey;">-1</td>
        <td>1</td>
        <td style="background-color: grey;">-1</td>
        <td>3</td>
    </tr>
    <tr>
        <td>6</td>
        <td>7</td>
        <td>8</td>
        <td>8</td>
        <td>7</td>
        <td>6</td>
        <td>5</td>
        <td>10</td>
        <td>4</td>
        <td style="background-color: grey;">-1</td>
        <td style="background-color: #66ccff;">2</td>
    </tr>
</table>

Maze Details:
<ul>
    <li>The starting block location will be provided as a function parameter (Blue block in the example).</li>
    <li>Blocks with a value of -1 are impassable (Grey blocks in the example).</li>
    <li>The Goal block and only the Goal block will always have a cost of 0 (Green blocks in the example).</li>
    <li>The maze will not have any circular routes that do not go through the Goal block first.</li>
    <li>The maze is stored in a 2D array. The 2D maze array will be defined globally.</li>
    <li>The maze size will be a pair of positive integer numbers, you can assume that the size parameters, length, and height of the maze will fit in a C integer (int) type.</li>
    <li>The cost values, excluding the impassable blocks, will always be a positive integer that will fit in a C integer (int) type.</li>
    <li>The maze length and height are not guaranteed to be equal but will be global fixed defined constants for each problem.</li>
</ul>

</summary>
<hr>
[Answer]
</details>
