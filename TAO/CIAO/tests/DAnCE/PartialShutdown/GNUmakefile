# -*- makefile -*-
#----------------------------------------------------------------------------
#       GNU ACE Workspace
#
# $Id: GNUACEWorkspaceCreator.pm 94635 2011-10-06 12:59:23Z johnnyw $
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# /home/build/DOC_ROOT/stage-644/ACE_wrappers/bin/mwc.pl -type gnuace -exclude "TAO/TAO_*.mwc,TAO/CIAO/CIAO_*.mwc" -workers 10 -recurse -hierarchy -relative ACE_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers -relative TAO_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers/TAO -relative CIAO_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers/TAO/CIAO -relative DANCE_ROOT=/home/build/DOC_ROOT/stage-644/ACE_wrappers/TAO/DAnCE
#
#----------------------------------------------------------------------------

MAKEFILE = GNUmakefile

ifeq ($(findstring k,$(MAKEFLAGS)),k)
  KEEP_GOING = -
endif

include $(ACE_ROOT)/include/makeinclude/macros.GNU

all: PartialShutdown_idl_gen PartialShutdown_lem_gen PartialShutdown_stub PartialShutdown_skel PartialShutdown_Component1_idl_gen PartialShutdown_Component1_stub PartialShutdown_Component1_lem_gen PartialShutdown_Component1_lem_stub PartialShutdown_Component1_exec PartialShutdown_Component1_svnt PartialShutdown_Component2_idl_gen PartialShutdown_Component2_stub PartialShutdown_Component2_lem_gen PartialShutdown_Component2_lem_stub PartialShutdown_Component2_exec PartialShutdown_Component2_svnt PartialShutdown_Component3_idl_gen PartialShutdown_Component3_stub PartialShutdown_Component3_lem_gen PartialShutdown_Component3_lem_stub PartialShutdown_Component3_exec PartialShutdown_Component3_svnt

REMAINING_TARGETS := $(filter-out all,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@cd Base && $(MAKE) -f GNUmakefile.PartialShutdown_idl_gen $(@)
	$(KEEP_GOING)@cd Base && $(MAKE) -f GNUmakefile.PartialShutdown_lem_gen $(@)
	$(KEEP_GOING)@cd Base && $(MAKE) -f GNUmakefile.PartialShutdown_stub $(@)
	$(KEEP_GOING)@cd Base && $(MAKE) -f GNUmakefile.PartialShutdown_skel $(@)
	$(KEEP_GOING)@cd Component1 && $(MAKE) -f GNUmakefile.PartialShutdown_Component1_idl_gen $(@)
	$(KEEP_GOING)@cd Component1 && $(MAKE) -f GNUmakefile.PartialShutdown_Component1_stub $(@)
	$(KEEP_GOING)@cd Component1 && $(MAKE) -f GNUmakefile.PartialShutdown_Component1_lem_gen $(@)
	$(KEEP_GOING)@cd Component1 && $(MAKE) -f GNUmakefile.PartialShutdown_Component1_lem_stub $(@)
	$(KEEP_GOING)@cd Component1 && $(MAKE) -f GNUmakefile.PartialShutdown_Component1_exec $(@)
	$(KEEP_GOING)@cd Component1 && $(MAKE) -f GNUmakefile.PartialShutdown_Component1_svnt $(@)
	$(KEEP_GOING)@cd Component2 && $(MAKE) -f GNUmakefile.PartialShutdown_Component2_idl_gen $(@)
	$(KEEP_GOING)@cd Component2 && $(MAKE) -f GNUmakefile.PartialShutdown_Component2_stub $(@)
	$(KEEP_GOING)@cd Component2 && $(MAKE) -f GNUmakefile.PartialShutdown_Component2_lem_gen $(@)
	$(KEEP_GOING)@cd Component2 && $(MAKE) -f GNUmakefile.PartialShutdown_Component2_lem_stub $(@)
	$(KEEP_GOING)@cd Component2 && $(MAKE) -f GNUmakefile.PartialShutdown_Component2_exec $(@)
	$(KEEP_GOING)@cd Component2 && $(MAKE) -f GNUmakefile.PartialShutdown_Component2_svnt $(@)
	$(KEEP_GOING)@cd Component3 && $(MAKE) -f GNUmakefile.PartialShutdown_Component3_idl_gen $(@)
	$(KEEP_GOING)@cd Component3 && $(MAKE) -f GNUmakefile.PartialShutdown_Component3_stub $(@)
	$(KEEP_GOING)@cd Component3 && $(MAKE) -f GNUmakefile.PartialShutdown_Component3_lem_gen $(@)
	$(KEEP_GOING)@cd Component3 && $(MAKE) -f GNUmakefile.PartialShutdown_Component3_lem_stub $(@)
	$(KEEP_GOING)@cd Component3 && $(MAKE) -f GNUmakefile.PartialShutdown_Component3_exec $(@)
	$(KEEP_GOING)@cd Component3 && $(MAKE) -f GNUmakefile.PartialShutdown_Component3_svnt $(@)

.PHONY: PartialShutdown_idl_gen
PartialShutdown_idl_gen:
	$(KEEP_GOING)@cd Base && $(MAKE) -f GNUmakefile.PartialShutdown_idl_gen all

.PHONY: PartialShutdown_lem_gen
PartialShutdown_lem_gen: PartialShutdown_idl_gen
	$(KEEP_GOING)@cd Base && $(MAKE) -f GNUmakefile.PartialShutdown_lem_gen all

.PHONY: PartialShutdown_stub
PartialShutdown_stub: PartialShutdown_lem_gen
	$(KEEP_GOING)@cd Base && $(MAKE) -f GNUmakefile.PartialShutdown_stub all

.PHONY: PartialShutdown_skel
PartialShutdown_skel: PartialShutdown_stub
	$(KEEP_GOING)@cd Base && $(MAKE) -f GNUmakefile.PartialShutdown_skel all

.PHONY: PartialShutdown_Component1_idl_gen
PartialShutdown_Component1_idl_gen:
	$(KEEP_GOING)@cd Component1 && $(MAKE) -f GNUmakefile.PartialShutdown_Component1_idl_gen all

.PHONY: PartialShutdown_Component1_stub
PartialShutdown_Component1_stub: PartialShutdown_stub PartialShutdown_Component1_idl_gen
	$(KEEP_GOING)@cd Component1 && $(MAKE) -f GNUmakefile.PartialShutdown_Component1_stub all

.PHONY: PartialShutdown_Component1_lem_gen
PartialShutdown_Component1_lem_gen: PartialShutdown_Component1_idl_gen
	$(KEEP_GOING)@cd Component1 && $(MAKE) -f GNUmakefile.PartialShutdown_Component1_lem_gen all

.PHONY: PartialShutdown_Component1_lem_stub
PartialShutdown_Component1_lem_stub: PartialShutdown_stub PartialShutdown_Component1_stub PartialShutdown_Component1_lem_gen
	$(KEEP_GOING)@cd Component1 && $(MAKE) -f GNUmakefile.PartialShutdown_Component1_lem_stub all

.PHONY: PartialShutdown_Component1_exec
PartialShutdown_Component1_exec: PartialShutdown_Component1_stub PartialShutdown_Component1_lem_stub
	$(KEEP_GOING)@cd Component1 && $(MAKE) -f GNUmakefile.PartialShutdown_Component1_exec all

.PHONY: PartialShutdown_Component1_svnt
PartialShutdown_Component1_svnt: PartialShutdown_Component1_lem_stub
	$(KEEP_GOING)@cd Component1 && $(MAKE) -f GNUmakefile.PartialShutdown_Component1_svnt all

.PHONY: PartialShutdown_Component2_idl_gen
PartialShutdown_Component2_idl_gen:
	$(KEEP_GOING)@cd Component2 && $(MAKE) -f GNUmakefile.PartialShutdown_Component2_idl_gen all

.PHONY: PartialShutdown_Component2_stub
PartialShutdown_Component2_stub: PartialShutdown_stub PartialShutdown_Component2_idl_gen
	$(KEEP_GOING)@cd Component2 && $(MAKE) -f GNUmakefile.PartialShutdown_Component2_stub all

.PHONY: PartialShutdown_Component2_lem_gen
PartialShutdown_Component2_lem_gen: PartialShutdown_Component2_idl_gen
	$(KEEP_GOING)@cd Component2 && $(MAKE) -f GNUmakefile.PartialShutdown_Component2_lem_gen all

.PHONY: PartialShutdown_Component2_lem_stub
PartialShutdown_Component2_lem_stub: PartialShutdown_stub PartialShutdown_Component2_stub PartialShutdown_Component2_lem_gen
	$(KEEP_GOING)@cd Component2 && $(MAKE) -f GNUmakefile.PartialShutdown_Component2_lem_stub all

.PHONY: PartialShutdown_Component2_exec
PartialShutdown_Component2_exec: PartialShutdown_Component2_stub PartialShutdown_Component2_lem_stub
	$(KEEP_GOING)@cd Component2 && $(MAKE) -f GNUmakefile.PartialShutdown_Component2_exec all

.PHONY: PartialShutdown_Component2_svnt
PartialShutdown_Component2_svnt: PartialShutdown_Component2_lem_stub
	$(KEEP_GOING)@cd Component2 && $(MAKE) -f GNUmakefile.PartialShutdown_Component2_svnt all

.PHONY: PartialShutdown_Component3_idl_gen
PartialShutdown_Component3_idl_gen:
	$(KEEP_GOING)@cd Component3 && $(MAKE) -f GNUmakefile.PartialShutdown_Component3_idl_gen all

.PHONY: PartialShutdown_Component3_stub
PartialShutdown_Component3_stub: PartialShutdown_stub PartialShutdown_Component3_idl_gen
	$(KEEP_GOING)@cd Component3 && $(MAKE) -f GNUmakefile.PartialShutdown_Component3_stub all

.PHONY: PartialShutdown_Component3_lem_gen
PartialShutdown_Component3_lem_gen: PartialShutdown_Component3_idl_gen
	$(KEEP_GOING)@cd Component3 && $(MAKE) -f GNUmakefile.PartialShutdown_Component3_lem_gen all

.PHONY: PartialShutdown_Component3_lem_stub
PartialShutdown_Component3_lem_stub: PartialShutdown_stub PartialShutdown_Component3_stub PartialShutdown_Component3_lem_gen
	$(KEEP_GOING)@cd Component3 && $(MAKE) -f GNUmakefile.PartialShutdown_Component3_lem_stub all

.PHONY: PartialShutdown_Component3_exec
PartialShutdown_Component3_exec: PartialShutdown_Component3_stub PartialShutdown_Component3_lem_stub
	$(KEEP_GOING)@cd Component3 && $(MAKE) -f GNUmakefile.PartialShutdown_Component3_exec all

.PHONY: PartialShutdown_Component3_svnt
PartialShutdown_Component3_svnt: PartialShutdown_Component3_lem_stub
	$(KEEP_GOING)@cd Component3 && $(MAKE) -f GNUmakefile.PartialShutdown_Component3_svnt all

project_name_list:
	@echo PartialShutdown_idl_gen
	@echo PartialShutdown_lem_gen
	@echo PartialShutdown_skel
	@echo PartialShutdown_stub
	@echo PartialShutdown_Component1_exec
	@echo PartialShutdown_Component1_idl_gen
	@echo PartialShutdown_Component1_lem_gen
	@echo PartialShutdown_Component1_lem_stub
	@echo PartialShutdown_Component1_stub
	@echo PartialShutdown_Component1_svnt
	@echo PartialShutdown_Component2_exec
	@echo PartialShutdown_Component2_idl_gen
	@echo PartialShutdown_Component2_lem_gen
	@echo PartialShutdown_Component2_lem_stub
	@echo PartialShutdown_Component2_stub
	@echo PartialShutdown_Component2_svnt
	@echo PartialShutdown_Component3_exec
	@echo PartialShutdown_Component3_idl_gen
	@echo PartialShutdown_Component3_lem_gen
	@echo PartialShutdown_Component3_lem_stub
	@echo PartialShutdown_Component3_stub
	@echo PartialShutdown_Component3_svnt
