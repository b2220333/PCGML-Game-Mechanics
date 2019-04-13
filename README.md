# Using Procedural Content Generation via Machine Learning as a Game Mechanic
This repository contains my master thesis which addresses the open problem of "Using Procedural Content Generation via Machine Learning as a Game Mechanic". It was written for the study program [Game Engineering and Simulation Technology](https://www.technikum-wien.at/en/study_programs/master_s/game_engineering_and_simulation_technology/) at the [University of Applied Sciences Technikum Wien](https://www.technikum-wien.at/en/) in Vienna, Austria.

## Thesis Abstract
Procedural Content Generation (PCG) is a powerful and essential topic in modern video games which helps developers to create a vast amount of game elements. Brand new and recent research now connected PCG with Machine Learning (ML) to enable new horizons of content generation. Nevertheless, the research showed that there is still much to do and left the problem of using PCG via ML (PCGML) as a game mechanic open for further research.

For this reason, this thesis dedicated itself to address this open problem with a theoretical and practical approach and furthermore provides developers with a guideline about the procedure of developing PCGML game mechanics. It first addressed fundamental theoretical issues which help to create awareness for PCGML in the first place. It then addressed possible PCGML game mechanics where one of them was implemented in a game prototype scenario. The entire development process for this prototype was documented so that developers can follow them step by step to implement their PCGML game mechanics.

Now, the research showed that PCGML game mechanics are suitable for a broad range of games and are not limited to particular genres. 13 different ideas are described in the thesis and one particular idea called "Changing Weapons" was then implemented in a game prototype scenario. The game mechanics primary feature is a weapon generator which can generate new and similar weapons based on the weapons of a favorite first-person shooter game. In specific, the generator uses a with TensorFlow implemented variational autoencoder to learn the underlying and hidden structure of the provided weapon data and can generate useful weapon data. This generator was then integrated into Unreal Engine 4 to test and prove that a PCGML game mechanic can be used in a typical game engine and showed that this application is possible without any issues.

To conclude the thesis, a performance report was created which showed that the implemented game mechanic does not cause significant performance losses. Thus, it is possible to use PCGML-based game mechanics in video games regularly. Therefore, with this proof-of-concept, a new game mechanic area for creating new player experience has opened for future games.

## Repository Breakdown
There are two main projects in this repository:
- The [master thesis](../master/Master%20Thesis%20LaTeX), written in LaTeX.
- A prototype game scenario which uses PCGML as a game mechanic. The [prototype folder](../master/Game%20Mechanic%20Prototype/) contains the actual [Unreal Engine 4 project](../master/Game%20Mechanic%20Prototype/UE4) and a [test environment](../master/Game%20Mechanic%20Prototype/TensorFlow%20Playground) in which I tested the Python scripts before using them in the engine.

## Playable Prototype
This repository provides a playable prototype which can be found in the [release section](https://github.com/bernhardrieder/PCGML-Game-Mechanics/releases).

# Getting Started with the Project
## Requirements
- [Unreal Engine 4.22](https://www.unrealengine.com)
- Windows 7/8/10 64bit 

## How to Start and Play?
- Clone the repository
- Open the plugins folder of the project and extract the "plugins-source-code.7z" file. This file contains the [TensorFlow plugin](https://github.com/getnamo/tensorflow-ue4) with a modification in the [UnrealEnginePython plugin](https://github.com/getnamo/UnrealEnginePython/releases/tag/1.8.0) to enable proper packaging support. For more information see [this thread](https://github.com/getnamo/tensorflow-ue4/issues/16#issuecomment-464488840).
- Download the _"Windows x86-64 embeddable zip file"_ from the [Python website](https://www.python.org/downloads/release/python-364/) and extract it into _"../UE4/Binaries/Win64/"_. **Note:** the required Python version is 3.6.4.
- Launch the project and make sure you can activate the Python Console in "Window/Developer Tools/Python Console". This indicates that the Python plugin is enabled and works.
- Check the Python console and wait until all TensorFlow dependencies are installed. For more information, check out this [GitHub page](https://github.com/getnamo/tensorflow-ue4#installation--setup)
- Restart the project and then you should be able to run the game now. To make sure everything works, open the weapon generator blueprint located in "Content/Blueprints/BP_TensorFlowWeaponGenerator". It should take a while to open, and no error message should appear in the logs. That means you are ready to go! 
- Press the play button or ALT+P and you should find yourself in the main menu. Don't panic if it freezes after pressing the "Start Scenario" button! It just takes a few moments to load all the dlls.

## Known Issues
- TensorFlowComponent not found: This can happen if your path of the project is too long. Quick fix: move your project to another directory.

## Want to learn more about the project?
Check out the chapters 5, 7 and 8 of my [master thesis](https://github.com/bernhardrieder/PCGML-Game-Mechanics/blob/master/Master%20Thesis%20Bernhard%20Rieder.pdf).

# Credits
[getnamo](https://github.com/getnamo) for this awesome [Unreal Engine 4 TensorFlow plugin](https://github.com/getnamo/tensorflow-ue4)
