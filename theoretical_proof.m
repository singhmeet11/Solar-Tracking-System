%% calculating the effeciency of the model
%% defining the time and solar power throught the day 
clc 
clear all

%% encoding the time and solar energy 
t = [5;6;7;8;9;10;11;12;13;14;15;16;17;18;19];
S_0 = [0.0006243142292143844;0.48982873525574155;0.7629989259170115; 0.8925159090839281;0.9664573718569942 ...
    ;1.0093032776047608;   1.0320801425296915;  1.0394831916416303; 1.0325977634880483 ...
    ;1.0097282036922521 ;0.9674768997876957 ; 0.893559627909914; 0.7649995241331549 ; 0.4969555121232869 ...
    ; 0.0006243136993935305];

%% some constants
A = 1 ; %area of the panel 
w = 13.85; % the angular rotation of the sun from the solar panels perspective
alpha = w*t1;
t1 = t-5;

%% for the case of solar tracker 
I_trac = trapz(t1,S_0);

%% for the case of static 
aaa =+ 0.5*(cos(alpha)) + 0.866*(sin(alpha));
I_2 = S_0.*(aaa);
% need to make sure before integration that each component has same sign 
I_stat = trapz(t1,abs(I_2));
