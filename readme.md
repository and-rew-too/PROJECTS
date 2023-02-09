
| Common BOM prices | Price |
| --- | --- |
| Arduino Uno: | 7.99 | 
| ESP32 DevKitv1 : | 12.99 |
| SqFt plywood: | 3.50 |
| Ft 2x4:| 1.50 |
| Ft 8020:| 6.00 |

Every folder within this repo will also contain a README, which is intended to explain, at first glance, what a project does and how to install or test the code. If applicable the folders will have these following sections. 

## Introduction and Relevant Links
Here is the IC being used, and a link to relevant information on how to care for indoor plants and measurements of 
<br> Important: Must use aluminum channel for proper heatsinking. 


## BOM
Spreadsheet must be uploaded with .csv format, using top column for headers and must have at a minimum these columns
* **Part
* **Dim/Package
* **Unit Cost
* **Units
* **Cost
* **Supplier
* **Link
(No need to include pricing for common items sold >100 packs like resistors, screws, etc)

## CAD Files
Include within project folders' readme if relevant
<br> Include link to public onshape editor in readme
<br> Include STL files if relevant, or alternatively share a jpeg of TD / Assembly

## Gerber (PCB) Files
Include within project folders' readme if relevant
<br> Include the full file path to KiCad file for schematics

## Descriptions to add Below
* **What is the goal of this project?**  
* **What are the relevant files needed to recreate all items from scratch**
* ** Attached any relevant code related to functioning of materials

## Results and Improvements
Include a txt file, beginning with not-immprov and then the project name. 

## Examples Below
**Example:** The [README for 18F’s Midas project](https://github.com/18f/midas) starts out by answering the questions:
<br> **Example: Inline Code** 
```shell
docker build -f ./Dockerfile -t 18fgsa/analytics.usa.gov:<version> .
docker build -f ./Dockerfile.production -t 18fgsa/analytics.usa.gov:<version>-production .
```
**Example:** The README for analytics.usa.gov contains detailed instructions for [developing the site](https://github.com/18f/analytics.usa.gov#setup) and [deploying the site](https://github.com/18f/analytics.usa.gov#deploying-to-staging-18f-specific).  
