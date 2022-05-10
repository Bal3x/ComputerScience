##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=TeamLeader
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=/home/bal3x/clases/ComputerScience/SP22/CECS222/CECS222
ProjectPath            :=/home/bal3x/clases/ComputerScience/SP22/CECS222/CECS222/TeamLeader
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Bal3x
Date                   :=10/05/22
CodeLitePath           :=/home/bal3x/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=$(IntermediateDirectory)
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="TeamLeader.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  -static
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/TeamLeader.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Employee.cpp$(ObjectSuffix) $(IntermediateDirectory)/ProductionWorker.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)


$(IntermediateDirectory)/.d:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/TeamLeader.cpp$(ObjectSuffix): TeamLeader.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/TeamLeader.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/TeamLeader.cpp$(DependSuffix) -MM TeamLeader.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/bal3x/clases/ComputerScience/SP22/CECS222/CECS222/TeamLeader/TeamLeader.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/TeamLeader.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/TeamLeader.cpp$(PreprocessSuffix): TeamLeader.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/TeamLeader.cpp$(PreprocessSuffix) TeamLeader.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/bal3x/clases/ComputerScience/SP22/CECS222/CECS222/TeamLeader/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Employee.cpp$(ObjectSuffix): Employee.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Employee.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Employee.cpp$(DependSuffix) -MM Employee.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/bal3x/clases/ComputerScience/SP22/CECS222/CECS222/TeamLeader/Employee.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Employee.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Employee.cpp$(PreprocessSuffix): Employee.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Employee.cpp$(PreprocessSuffix) Employee.cpp

$(IntermediateDirectory)/ProductionWorker.cpp$(ObjectSuffix): ProductionWorker.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/ProductionWorker.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/ProductionWorker.cpp$(DependSuffix) -MM ProductionWorker.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/bal3x/clases/ComputerScience/SP22/CECS222/CECS222/TeamLeader/ProductionWorker.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ProductionWorker.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/ProductionWorker.cpp$(PreprocessSuffix): ProductionWorker.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/ProductionWorker.cpp$(PreprocessSuffix) ProductionWorker.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


