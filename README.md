# hackerrank
שאלות
שאלה על

**Create lower bound**
מקבלים N מספרים שלמים בסדר ממוין. כמו כן, ניתנות לך שאילתות Q. בכל שאילתה, תינתן לך מספר שלם ועליך לדעת אם מספר שלם זה קיים במערך. אם כן, עליכם לומר באיזה אינדקס הוא קיים ואם הוא אינו קיים, עליכם לומר לאינדקס שבו נמצא המספר השלם הקטן ביותר שהוא רק גדול מהמספר הנתון.

הגבול התחתון הוא פונקציה שניתן להשתמש בה עם וקטור ממוין. למד כיצד להשתמש בגבול התחתון כדי לפתור בעיה זו על ידי לחיצה כאן.

פורמט הכנסה
השורה הראשונה של הקלט מכילה את מספר המספרים השלמים N. השורה הבאה מכילה מספרים N שלמים בסדר ממוין. השורה הבאה מכילה את Q, מספר השאילתות. ואז שורות Q עוקבות אחר כל אחת המכילה מספר Y שלם יחיד.

הערה: אם אותו מספר קיים מספר פעמים, עליך להדפיס את האינדקס הראשון בו הוא מתרחש. כמו כן, הקלט הוא כזה שתמיד תהיה לך תשובה לכל שאילתה.

פורמט פלט

עבור כל שאילתה עליך להדפיס "כן" (ללא הצעות מחיר) אם המספר קיים ובאיזה אינדקס (מבוסס 1) הוא מופרד על ידי רווח.

אם המספר אינו קיים, עליך להדפיס "לא" (ללא הצעות מחיר) ואחריו אינדקס המספר הקטן הבא הגדול ביותר מאותו מספר.

עליך להוציא כל שאילתה בשורה חדשה.


![image](https://user-images.githubusercontent.com/73065095/121351649-acd42a00-c934-11eb-9f9e-c316217290ef.png)

**2**

**StringStream**


![image](https://user-images.githubusercontent.com/73065095/121352004-0e949400-c935-11eb-9293-13e84aa7fe89.png)


**3**

**Sets-STL **

Sets are a part of the C++ STL. Sets are containers that store unique elements following a specific order. Here are some of the frequently used member functions of sets:

To know more about sets click Here. Coming to the problem, you will be given  queries. Each  Q query is of one of the following three types:
 1 X : Add an element  X to the set.
 2 X : Delete an element  X from the set. (If the number X  is not present in the set, then do nothing).
3 X  : If the number  X  is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).

Input Format
The first line of the input contains Q where  is the number of queries. The next Q  lines contain 1 query each. Each query consists of two integers y and x where  is the type of the query and x  is an integer.

Output Format
For queries of type  print3  "Yes"(without quotes) if the number  is present in the set and if the number x is not present, then print "No"(without quotes).
Each query of type 3 should be printed in a new line.

![image](https://user-images.githubusercontent.com/73065095/121353467-916a1e80-c936-11eb-895b-f9082cfe7846.png)
