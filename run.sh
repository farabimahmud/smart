#!/bin/bash

# --debug-file=debug.out \

    
#build/X86/gem5.opt \
#    --debug-flags=RandomDelay \
#    --debug-file=debug.out \
#    configs/example/se.py \
#	-c a.out \
#	--ruby \
#	--caches \
#	--l2cache \
#	--cpu-type=DerivO3CPU \
#	--num-cpus=16 \
#	--num-l2caches=16 \

./build/NULL/gem5.debug \
        --debug-flags=RubyNetwork \
        configs/example/garnet_synth_traffic.py  \
        --num-cpus=16\
        --num-dirs=16 \
        --network=garnet2.0 \
        --topology=Mesh_XY \
        --mesh-rows=4  \
        --sim-cycles=1000 \
        --synthetic=uniform_random \
        --injectionrate=0.02 \
        --num-packets-max=2 \
        --single-sender-id=11 \
        --single-dest-id=1 \
        --smart \
        --smart_hpcmax=8 \
        --smart_dest_bypass \
        #--smart 
