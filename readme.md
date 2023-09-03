# String Similarity Calculator

Compare string similarity using various algorithms

[Prerequisites](#prerequisites) •
[Compilation](#compilation) •
[Usage](#usage) •
[License](#license)

---

## Prerequisites

Before you start, make sure you have the following prerequisites:

- A C++ compiler (e.g., g++ on Linux/macOS, MinGW on Windows)
- Standard C++ library

## Compilation

To compile the project, follow these steps:

1. Open a terminal or command prompt.

2. Navigate to the directory containing your code files (both `.h` and `.cpp` files).

3. Compile the code using the following command:

   - For Linux/macOS (using g++):
     ```sh
     g++ -o string_similarity_calculator src/*.cpp -Iinclude
     ```

   - For Windows (using MinGW):
     ```sh
     g++ -o string_similarity_calculator.exe src/*.cpp -Iinclude
     ```

     Replace `string_similarity_calculator` with your desired executable name.

4. After successful compilation, you'll have an executable file in your current directory.

## Usage

Follow these steps to use the String Similarity Calculator:

1. Run the compiled program:
   ```sh
   ./string_similarity_calculator  # On Linux/macOS
   string_similarity_calculator.exe  # On Windows

    Follow the on-screen instructions to select a similarity algorithm and provide two input strings for comparison.

    The program will display the similarity score between the input strings based on the chosen algorithm.

    You can choose to enter new strings for comparison or exit the program.

About the Project

The String Similarity Calculator project provides a user-friendly interface for comparing the similarity between pairs of strings using various algorithms. Whether you're working on natural language processing tasks, data analytics, or any application that involves text comparison, this tool can help you measure string similarity effectively.

# License

This project is licensed under the MIT License. See the LICENSE file for details.
