 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\<"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# Calendar App
 > Your author list below should include links to all members GitHub and should begin with a "\<" (remove existing author).
 
 > Authors: [Charles Hong](https://github.com/Charles-Hong520), 
 > [Kunal Mittal](https://github.com/KunalMittal322), 
 > [Zhiyuan Wen](https://github.com/zhiyuanwen)
 
 > You will be forming a group of **THREE** students and work on an interesting project that you will propose yourself (in this `README.md` document). You can pick any project that you'd like, but it needs ot implement three design patterns. Each of the members in a group is expected to work on at least one design pattern and its test cases. You can, of course, help each other, but it needs to be clear who will be responsible for which pattern and for which general project features.
 
 > ## Expectations
 > * Incorporate **three** distinct design patterns, *two* of the design patterns need to be taught in this course:
 >   * Composite, Strategy, Abstract Factory, Visitor
 > * All three design patterns need to be linked together (it can't be three distinct projects)
 > * Your project should be implemented in C/C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.

## Project Description
 > We decided to do a calendar because with the current outside situation, calendars have become an important tool in managing everyday lives. Our plans for the calendar are to just add events(pre-made) at the user’s request and later on, we can determine how busy the user is per day, week, or month providing more information and recommending possible alterations to their schedule.
 > * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 >   * [Qt](https://www.qt.io/) - GUI tool, will only use this provided we're ahead of schedule
 >   * [OpenGL](http://www.opengl-tutorial.org/) - GUI tool, will only use this provided we're ahead of schedule
 > * What will be the input/output of your project?
 >   * Command line Interface(input and output)
 >     * Input: We can have a simple line by line or specifically formatted prompt for the user to enter, or we can use an algorithm to parse the user's request to add an event to the calendar. This will be easier for the user, but harder to implement.
 >     * Output: multiple lines of printing the calendar events. They can be displayed in different ways chosen by the user.
 >   * Possibly GUI interface(input and output) <- this is only if we finish the command line interface first
 > * What are the three design patterns you will be using. Explain in 3 - 5 sentences why you picked this pattern and what feature you will implement with it
 >     * Strategy: This design pattern is rather simple and is probably present in many, many projects. We're planning on using an algorithm that determines how busy you are in a day, depending on how busy you are the calendar will give you suggestions. Aside from this, strategy may have more instances of itself if we decide to implement more algorithms
 >     * Observer: Depending on what point of "view" the user has, the output must be different. Similar to how the apple calendar expresses it's events to the viewers depending on if you're in month, week, or day. For example, if we look at a day, we should able to seem the specific time slots per day, whereas if we looked at it from a month point of view, all you should see is if you have a meeting on that day. In addition, we're planning on making labels of appointments. meetings, or breaks so depending on what label you have, that can alter what pops up e.g: if it's a busy day just show the events, if it's a day filled with breaks maybe suggest moving your workload around.
 >     * Abstract Factory: Originally we were considering using the Singleton method but we instead decided to switch to this as this design as more uses/functionality. Like we mentioned before, we are planning on creating a multitude of labels which are derived from an event. This means that we are going to try and make "Events" abstract and made subclasses like "Break", "Appointment", etc. 

 ### Design Document
 
 > ![PDF of Diagram](https://github.com/cs100/final-project-chong039-kmitt006-zwen012/blob/master/CS100P2.pdf)
 > * Strategy Pattern (Busyness Index)
 >   * Our strategy pattern will incorporate a class that determines what to do based on how busy you are that day, week, month
 >   * The strategy pattern will have an abstract class with a subclass that returns the business index based on day, week, or month. For example, if you wish to know how busy you are in a day, it would use an algorithm that calculates how busy you are within a 24 hr period, for example you could have like 5 events each taking up half an hour and you wouldn’t be that busy. If you wanted to check how busy you were in a week you would use a similar algorithm to that of day, but instead you would assume that your events and times are evenly distributed and that may return a different output rather than just focusing on one day, the same applies to a month.
 > * Observer Pattern (Time State)
 >   * This pattern determines how the user determines what view they’re looking at for the calendar, eg day, week, or month
 >   * The Observer pattern will be similar to the strategy pattern in the sense that there will be an abstract class that is in charge of determining the unit of time (day, week, and month) through an abstract class with subclasses like day, week, and month. The point of this class is to just set the state of the viewpoint for the user similar to that of the apple calendar so when the user enters what they want to see, we change the state just like that through the observer class.
> * Abstract Factory Pattern (Making all the objects and stuff)
>   * This pattern basically determines how we’re going to make events for people which can vary from doctor’s appointments to basic meetings
>   * The abstract factory pattern will create an event, but rather than just making it a chunk of time with a string description we will have premade events for the user to select from so they can just ask for the event and it’s automatically generated similar to how we choose classes at UCR. In addition to this, since the class is a creation based abstract factory class we can choose to add more and more events and nothing should have any major changes.

 
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 
 ### Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 ### Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > For the classes in our OMT diagram, with the exception of the client, we used googletest and eventually fit all of our tests into one big test file that we can run in one command.
 > For our final product we just used an input file as our client input, and the client code took care of the rest. Whether the tests were sucessfull or not depended on human interpretation.
