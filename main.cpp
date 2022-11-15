#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int
 float
 double
 bool
 char
 unsigned int
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'

    int gamesWon = 10;
    int rank = 10;
    int numberOfLaps = 2;
    float height = 155.f;
    float weight = 75.f;
    float trackLengthInSeconds = 525.f;
    double headCircumference = 55.0;
    double averageWaitTime = 45.5;
    double averageTimeToComplete = 300.24; 
    bool hasBlueEyes = true;
    bool insectFlies = false;
    bool isAmphibian = false;
    char input = 'Y';
    char scienceGrade = 'A';
    char surnameInitial = 'W';
    unsigned int counter = 1;
    unsigned int classSize = 24;
    unsigned int numPages = 254;

    
    ignoreUnused(number, gamesWon, rank, numberOfLaps, height, weight, trackLengthInSeconds, headCircumference, averageWaitTime, averageTimeToComplete, hasBlueEyes, insectFlies, isAmphibian, input, scienceGrade, surnameInitial, counter, classSize, numPages); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
float calculateBodyMassIndex(float height = 175.f, float weight = 75.f)
{
    ignoreUnused(height, weight);
    return {};
}

/*
 2)
 */
double calculateAverageMathScore(double score, int studentID)
{
    ignoreUnused(score, studentID);
    return {};
}

/*
 3)
 */
void setGrade(int mark = 60)
{
    ignoreUnused(mark);
}

/*
 4)
 */
bool determineWhetherInsectFlies(bool hasWings = true)
{
    ignoreUnused(hasWings);
    return {};
}

/*
 5)
 */
int calculateAverageWaitTime(char hospitalCode, char clinicCode, bool isAdult = true)
{
    ignoreUnused(hospitalCode, clinicCode, isAdult);
    return {};
}

/*
 6)
 */
void moveChessPiece(char pieceCode = 'P', char coordLetter = 'A', int coordNum = 7)
{
    ignoreUnused(pieceCode, coordLetter, coordNum);
}

/*
 7)
 */
bool determineWhetherFinishedRace(float distTravelled)
{
    ignoreUnused(distTravelled);
    return {};
}

/*
 8)
 */
int calculateYearOfBirth(int currentYear = 2022, int ageInYears = 40)
{
    ignoreUnused(currentYear, ageInYears);
    return {};
}

/*
 9)
 */
double convertFahrenheitToCelsius(double fahrenheit = 76)
{
    ignoreUnused(fahrenheit);
    return {};
}

/*
 10)
 */
double convertFeetToInches(double feet)
{
    ignoreUnused(feet);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto bmi = calculateBodyMassIndex(175.0, 75.0);
    //2)
    auto averageScore = calculateAverageMathScore(80, 1);
    //3)
    setGrade(80);
    //4)
    auto batFlies = determineWhetherInsectFlies(true);
    //5)
    auto waitTime = calculateAverageWaitTime('C', 'R', true);
    //6)
    moveChessPiece('P', 'P', 7);
    //7)
    auto raceComplete = determineWhetherFinishedRace(175.5);
    //8)
    auto yearBorn = calculateYearOfBirth(2022, 1982);
    //9)
    auto celsius = convertFahrenheitToCelsius(75.8);
    //10)
    auto inches = convertFeetToInches(6.5);
    
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
