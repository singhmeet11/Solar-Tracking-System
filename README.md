# Solar-Tracking-System
The world population is increasing day by day and the demand for energy is increasing accordingly. Oil and coal, the main source of energy nowadays, are expected to end up from the world during the recent century which explores a serious problem in providing the humanity with an affordable and reliable source of energy. The need of the hour is renewable energy resources with cheap running costs. Solar energy has become a preferred because of its ubiquity, abundance and sustainability, regardless the intermittency of sunlight, solar energy is widely available and completely free of cost. It is harnessed (converted to other forms of energy) by using techniques such as solar heating photovoltaic cell, solar thermal energy, solar architecture and artificial photosynthesis. Photovoltaic is solid-state device that simply makes electricity out of sunlight, silently and with little to no maintenance, no pollution and no significant depletion of material resources. However, it is costly to install but in a long term it can save more energy and offers more reduction in cost. Solar panels, also called photovoltaic or PV module as it directly converts sunlight into electricity. A photovoltaic module is an interconnected collection of cells combined into one item. When a number of solar or photovoltaic modules are installed together, this is commonly referred to as a solar array. Many schemes have been developed to incorporate the same. The most widely renowned till date are:\
a. Static Solar Panel Systems\
b. Time based Moving Solar Panel Systems \
c. Maximum Power Point Tracking Solar Panel Systems. \
We will be looking into " Maximum Power Point Tracking Solar Panel Systems" in this project.\
Solar tracker is an electro-mechanical device for orienting a solar
photovoltaic panel toward the sun to get maximum intensity of light and to keep the position of panel perpendicular to the light source. Solar powered equipment works best when pointed at or near the sun, so a solar tracker can increase the effectiveness of such equipment. The tracker will enable the panel to follow the path of the sun and produce more power as it absorbs more
sunlight. In single axis solar tracking, tracker can only capture the minimum power tracking
sunlight in one direction which is the elevation movements from east to west by rotating the
structure along the vertical axis.\\
In this project we have used PIC16F877A with bi directional stepper motor inorder to make the solar tacker. 

## Topics included
The project was report was divided into several parts and we only give an a brief about the whole project here for more depth information look into the project report and presenatation. 

## Hardware 
Section deals with the hardware of the model. The study, arrangement , cost of all the parts used
1. Parts used 
a. PIC16F877A
b. NEMA 17 2.5 Kg-cm Bipolar Stepper Motor
c. L293d
d. Light Dependant Resistor 
e. Solar Panel
f. Battery
g. Charge Controller
h. Buck converter

2. Schematic
<img src="https://github.com/singhmeet11/Solar-Tracking-System/blob/main/scehmatic.png" width="500">

 3. Prototype
<img src="https://github.com/singhmeet11/Solar-Tracking-System/blob/main/prototype.jpeg" width="500">


## Software
The algorithm reads the value of inputs which are provided by the LDRs and is stored in the values of V1 and V2. It further compares the value of V1 and V2, if the value of the V1 and V2 are lesser than the expected value during the day(800) then the solar panel remains in the starting position and when the values cross the threes hold, they are compared between each other and the solar panel moves accordingly. \\
If the value of V1 is bigger than the value of V2 then the solar panel moves toward 1st LDR and stops when the values become approximately same. After each iteration this process is repeated until night. After sunset the whole solar panel resets in the starting position. \\
The whole algorithm is shown in the flowchart below.

<img src="https://github.com/singhmeet11/Solar-Tracking-System/blob/main/Screenshot (11).png" width="500">

## A theoretical proof that solar trackers are more efficient
We have said that adding our sun tracking platforms increase the efficiency of your solar systems. This section will give you a basic theoretical proof of how do we go about doing this? 

The flux of a vector field is defined as

<a href="https://www.codecogs.com/eqnedit.php?latex=\begin{equation}&space;\phi&space;=&space;\int_{A}&space;\Vec{h}.\hat{n}.da&space;\end{equation}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\begin{equation}&space;\phi&space;=&space;\int_{A}&space;\Vec{h}.\hat{n}.da&space;\end{equation}" title="\begin{equation} \phi = \int_{A} \Vec{h}.\hat{n}.da \end{equation}" /></a>

where _h_ is a vector field , _n_ gives us unit area vector and A gives us the total area upon which we want to calculate the flux.\\
For the following discussion lets treat solar radiation as a vector field comprising of parallel rays. We are gonna call this $\vec{S}$ and the flux generated by the solar radiation will be our main tool.  

On a summer day in India the sun rises  at 5:30  in the morning and sets around 18:30 in the evening, the peak amount of sunlight is seen around 12 in the noon. The intensity of the sunlight follows the curve given below.

<img src="https://github.com/singhmeet11/Solar-Tracking-System/blob/main/abc.png" width="500">

Now, the efficiency of solar system depends upon how much time does the solar panel face the sun rays directly. So one can say that Solar flux throughout the day  and Efficiency are proportional.

<a href="https://www.codecogs.com/eqnedit.php?latex=\dpi{100}&space;\begin{equation}&space;Efficiency&space;\propto&space;\int_{t1}&space;^{t2}&space;\left[&space;\int_A&space;\Vec{S}.\hat{n}.da&space;\right]&space;dt&space;\end{equation}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\dpi{100}&space;\begin{equation}&space;Efficiency&space;\propto&space;\int_{t1}&space;^{t2}&space;\left[&space;\int_A&space;\Vec{S}.\hat{n}.da&space;\right]&space;dt&space;\end{equation}" title="\begin{equation} Efficiency \propto \int_{t1} ^{t2} \left[ \int_A \Vec{S}.\hat{n}.da \right] dt \end{equation}" /></a>

So lets define 

<a href="https://www.codecogs.com/eqnedit.php?latex=\dpi{100}&space;\begin{equation}&space;I&space;=&space;\int_{t1}&space;^{t2}&space;\left[&space;\int_A&space;\Vec{S}.\hat{n}.da&space;\right]&space;dt&space;\end{equation}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\dpi{100}&space;\begin{equation}&space;I&space;=&space;\int_{t1}&space;^{t2}&space;\left[&space;\int_A&space;\Vec{S}.\hat{n}.da&space;\right]&space;dt&space;\end{equation}" title="\begin{equation} I = \int_{t1} ^{t2} \left[ \int_A \Vec{S}.\hat{n}.da \right] dt \end{equation}" /></a>

The  value of _S_  will depend upon the position of sun and as the position of the sun further depends upon the time of the day,

<img src="https://github.com/singhmeet11/Solar-Tracking-System/blob/main/bca.jpeg" width="500">

<a href="https://www.codecogs.com/eqnedit.php?latex=\dpi{100}&space;\begin{equation}&space;\vec{S}&space;=&space;S_0(t)&space;[cos(w_0&space;t)\hat{i}&space;-&space;sin(w_0&space;t)\hat{j}&space;\end{equation}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\dpi{100}&space;\begin{equation}&space;\vec{S}&space;=&space;S_0(t)&space;[cos(w_0&space;t)\hat{i}&space;-&space;sin(w_0&space;t)\hat{j}&space;\end{equation}" title="\begin{equation} \vec{S} = S_0(t) [cos(w_0 t)\hat{i} - sin(w_0 t)\hat{j} \end{equation}" /></a>

where _S_0(t)_ gives the intensity of sun and $w_0$ is the angular frequency of the sun with respect to the position of the solar system.

The value of _n_ will depend upon whether we are considering the solar tracking system or the the static one.

#### Static solar panel 

We find the value of I, 

<a href="https://www.codecogs.com/eqnedit.php?latex=\dpi{100}&space;\begin{equation}&space;I_{static}&space;=&space;7.27&space;\end{equation}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\dpi{100}&space;\begin{equation}&space;I_{static}&space;=&space;7.27&space;\end{equation}" title="\begin{equation} I_{static} = 7.27 \end{equation}" /></a>

#### Sun tracker 

<a href="https://www.codecogs.com/eqnedit.php?latex=\dpi{100}&space;\begin{equation}&space;I_{tracker}&space;=&space;11.35&space;\end{equation}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\dpi{100}&space;\begin{equation}&space;I_{tracker}&space;=&space;11.35&space;\end{equation}" title="\begin{equation} I_{tracker} = 11.35 \end{equation}" /></a>

#### Efficiency increase

<a href="https://www.codecogs.com/eqnedit.php?latex=\dpi{100}&space;\begin{equation}&space;\Delta&space;Efficiency&space;=&space;\frac{I_{tracker}&space;-&space;I_{static}}{I_{static}}&space;*&space;100&space;\end{equation}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\dpi{100}&space;\begin{equation}&space;\Delta&space;Efficiency&space;=&space;\frac{I_{tracker}&space;-&space;I_{static}}{I_{static}}&space;*&space;100&space;\end{equation}" title="\begin{equation} \Delta Efficiency = \frac{I_{tracker} - I_{static}}{I_{static}} * 100 \end{equation}" /></a>

Therefore , 

<a href="https://www.codecogs.com/eqnedit.php?latex=\dpi{100}&space;\begin{equation}&space;\Delta&space;Efficiency_{theoretical}&space;=&space;56.12&space;\%&space;\end{equation}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\dpi{100}&space;\begin{equation}&space;\Delta&space;Efficiency_{theoretical}&space;=&space;56.12&space;\%&space;\end{equation}" title="\begin{equation} \Delta Efficiency_{theoretical} = 56.12 \% \end{equation}" /></a>

This shows that our system is much more efficient. But due to a lot of errors this is not exact.


## Results and Discussions
We used a voltmeter in order to measure the amount of voltage that the solar panel delivers to the battery via the charge controller. After taking measurements after every hour we plotted a graph between voltage produced by fixed solar panel and by the sun tracking solar panel. 

It was found that the sun tracking solar panel produced similar voltage through out the day, proving the fact that direct sun rays have been obtained by the solar system. On the other hand a peak can be observed for the fixed solar panel.

<img src="https://github.com/singhmeet11/Solar-Tracking-System/blob/main/Screenshot (6).png" width="500">

 The graph above proves that the sun tracking solar panel is much more efficient than the static solar panel.
 
 
