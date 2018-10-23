MIGFILES = SRC_../SamplingMsg.h__OUT_SamplingMsg
NCGFILES = SRC_../TestSamplingStorageRadio.h__OUT_TestSamplingStorageRadio

nccSrc = $(patsubst SRC_%,%, $(filter SRC_%, $(subst __, ,$(1))))
nccOut = $(patsubst OUT_%,%, $(filter OUT_%, $(subst __, ,$(1))))
nccOutJava = $(addsuffix .java, $(call nccOut, $(1)))

PFLAGS = -I.. -I../sampling/


MIG = mig $(DFLAGS) $(PFLAGS) java
NCG = ncg $(DFLAGS) $(PFLAGS) java
JAVA = java -ea


all: mig ncg java

java:
	javac *.java

run:
	$(JAVA) Receiver


mig: $(MIGFILES)
$(MIGFILES):
	@echo "  --> mig " $(call nccOut, $@);
	@$(MIG) -java-classname=$(call nccOut, $@) $(call nccSrc, $@) $(call nccOut, $@) > $(call nccOutJava, $@)

ncg: $(NCGFILES)
$(NCGFILES):
	@echo "  --> ncg " $(call nccOut, $@);
	@$(NCG) -java-classname=$(call nccOut, $@) $(call nccSrc, $@) $(call nccOut, $@).h > $(call nccOutJava, $@)


clean: 
	rm -f *.class

cleanall: clean
	rm -f $(call nccOutJava, $(MIGFILES))
	rm -f $(call nccOutJava, $(NCGFILES))



