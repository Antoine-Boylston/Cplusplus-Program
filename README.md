# Cplusplus-Program

    1. Summarize the project and what problem it was solving.
        The goal of this project was to demonstrate my mastery of designing functional programs that comply with industry regulations and best practices. The code itself is
        for banking app that allows users to see how their investments will grow over time.
        
    2. What did you do particularly well?
        I designed the program well, using industry standard best practices such as in-line comments and appropriate naming conventions to enhance readability and maintainability.
        
    3. Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
        I might enhance this code with more input validation. Currently, it handles inputs for non-negative values, but it could also ensure the user enters only numeric inputs.
        This would prevent unexpected behavior if the user enters invalid inputs like letters or symbols.
        
    4. Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
        I found coding the interest calculation logic most challenging. My original code caused incorrect calculations. I found that the problem was in the order of operations when 
        applying monthly deposits and intrest. I changed the code to apply monthly interest first, then added the monthly deposit.
        
    5. What skills from this project will be particularly transferable to other projects or course work?
       This project was great practice developing an object-oriented programming application using secure and efficient C++ code. I also learned that just because a code seems to function properly without errors,             there cloud be errors in my calculations, and that I should test the program more carfully before sending it out.
       
    6. How did you make this program maintainable, readable, and adaptable?
        I used a well-structured function to encapsulate the logic for computing and displaying the balance and interest report. This allows for maintainablity if changes need to be made to how calculations are                 handled, you only have to update the function without touching other parts of teh program. The main function is concise and focused on high-level operations, which improves readability. The                             calculateAndDisplayReport function, also can be reused for different scenarios. Such as with or without monthly deposits.
