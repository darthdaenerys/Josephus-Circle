# **Josephus Circle**

In computer science and mathematics, the Josephus problem (or Josephus permutation) is a theoretical problem related to a certain counting-out game.

A drawing for the Josephus problem sequence for 500 people and skipping value of 6. The horizontal axis is the number of the person. The vertical axis (top to bottom) is time (the number of cycle). A live person is drawn as green, a dead one is drawn as black.[1]
People are standing in a circle waiting to be executed. Counting begins at a specified point in the circle and proceeds around the circle in a specified direction. After a specified number of people are skipped, the next person is executed. The procedure is repeated with the remaining people, starting with the next person, going in the same direction and skipping the same number of people, until only one person remains, and is freed.

## **Statement**

N people have decided to elect a leader by arranging themselves in a circle and eliminating every Mth person around the circle, closing ranks as each person drops out. Find which person will be the last one remaining (with rank 1)

## **Solution**

Assume the input is a circular linked list with N nodes and each node has a number
(range 1 to N) associated with it. The head node has number 1 as data.

- **Note:** The program is written for 't' test cases where 't' is entered by the user.

## **Tools**
- Visual Studio Code
- GNU GCC v11.2.0 compiler
