
|Common BOM prices | Price|
|Arduino Uno:| 7.99| 
|ESP32:| 0.99|
|SqFt plywood:|3.99|
|Ft 2x4:| 2.19|

Every repo contains a README, which is a document that is intended to explain, at first glance, what a project does and how to install or test the code.

READMEs are really important because they’re the first item a user will see when encountering your code. Creating a readable README ensures that your co-workers and the public will be able to understand the intention of your program, install the software, and fork and adapt your projects.

We find it helpful to think of the README as a guide to your code or project. It’s often helpful to create sections in the README for users to learn about the project. We recommend the following sections.

## Introduction and Relevant Links
Here is the IC being used, and a link to relevant information on how to care for indoor plants and measurements of 
Important: Must use aluminum channel for proper heatsinking. 

## BOM
Spreadsheet must be uploaded with .csv format, using top column for headers and have at a minimum
* **Part
* **Dim/Package
* **Unit Cost
* **Units
* **Cost
* **Supplier
* **Link


## A description of what the project is for.

This should answer a short list of basic questions:

* **What is this repo or project?** (You can reuse the repo description you used earlier because this section doesn’t have to be long.)
* **What is the goal of this project?**  
* ** Brainstorming photographs and sketches
* ** A minimum BOM and cost, kicad file, etc
* ** Attached any relevant code related to functioning of materials

**Example:** Here as well

**Example:** The [README for 18F’s Midas project](https://github.com/18f/midas) starts out by answering the questions:
## Instructions for how to develop, use, and test the code.

```shell
docker build -f ./Dockerfile -t 18fgsa/analytics.usa.gov:<version> .
docker build -f ./Dockerfile.production -t 18fgsa/analytics.usa.gov:<version>-production .
```

This should answer the question: **How do I get this project to work on my machine? How can I develop for this project?** We find it works really well if you follow a two-step approach to develop the content for this section: first, help someone setup the site who has never done it before, and then write down the exact instructions. Next, ask someone to follow those instructions and see if you’ve missed anything.
**Example:** The README for analytics.usa.gov contains detailed instructions for [developing the site](https://github.com/18f/analytics.usa.gov#setup) and [deploying the site](https://github.com/18f/analytics.usa.gov#deploying-to-staging-18f-specific).  
