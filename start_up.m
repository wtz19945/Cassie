%STARTUP Startup routine for Cassie project.

% Copyright 2017 Mikhail S. Jones
%%
% Get project root location
projectRoot = 'C:\Users\ciscor\Desktop\Tianze\cassie\cassie-control-v2\Controller'; % set folder to be your location
restoredefaultpath;
% Construct paths to cache and code folders
myCacheFolder = fullfile(projectRoot, 'Build', 'Cache');
myCodeFolder = fullfile(projectRoot, 'Build', 'Code');
% Set the file generation folder paths
Simulink.fileGenControl('set',...
    'CacheFolder', myCacheFolder,...
    'CodeGenFolder', myCodeFolder,...
    'createDir', true);
root_dir = pwd;
%% 
% Add all subfolders to MATLAB path
addpath(genpath('./'));
%addpath('D:\Cassie_Avoidance\Obstacle_Avoidance_OpenLoopNoCassie\Code_gen\Adaptive_StepTime') % Add in-development lib
%addpath('D:\Cassie_Avoidance\Obstacle_Avoidance_OpenLoopNoCassie\Code_gen/2D') % Add in-development lib
% Remove this subfoldr unless you want to try the first version of
% Secondary Computer Communication tool
% rmpath(strcat(root_dir,'\PCSPrimaryDir'));
% Remove OBstacle Avoidance Library
% rmpath(strcat(root_dir,'\Controller\Control2_MPC\Obstacle_Avoidance_Functions\Obstacle_Avoidance_OpenLoopNoCassie'));
% rmpath(strcat(root_dir,'\Controller\IROS_Simulation'));



