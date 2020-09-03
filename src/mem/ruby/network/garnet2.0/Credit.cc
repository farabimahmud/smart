/*
 * Copyright (c) 2008 Princeton University
 * Copyright (c) 2016 Georgia Institute of Technology
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met: redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer;
 * redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution;
 * neither the name of the copyright holders nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Authors: Niket Agarwal
 *          Tushar Krishna
 */


#include "mem/ruby/network/garnet2.0/Credit.hh"

// Credit Signal for buffers inside VC
// Carries m_vc (inherits from flit.hh)
// and m_is_free_signal (whether VC is free or not)

Credit::Credit(int vc, bool is_free_signal, Cycles curTime, int pid, int id)
{
    m_pid = pid;
    m_id = id;
    m_vc = vc;
    m_is_free_signal = is_free_signal;
    m_time = curTime;
}

std::string
Credit::ToString()
{
    std::stringstream out;
    out << "[credit:: ";
    out << "PID=" << m_pid << " ";
    out << "Id=" << m_id << " ";

 //   out << "Type=" << m_type << " ";
 // HEAD_, BODY_, TAIL_, HEAD_TAIL_, NUM_FLIT_TYPE_

    /*out << "Type=";
    switch(m_type){
        case 0: out << " HEAD_ "; break;
        case 1: out << " BODY_ "; break;
        case 2: out << " TAIL_ "; break;
        case 3: out << " HEAD_TAIL_ "; break;
        case 4: out << " NUM_FLIT_TYPE_ "; break;
        default: out << " UNKNOWN "; break;
    }
    out << "Vnet=" << m_vnet << " ";
    out << "VC=" << m_vc << " ";
    //out << "Src NI=" << m_route->src_ni << " ";
    //out << "Src Router=" << m_route->src_router << " ";
    //out << "Dest NI=" << m_route->dest_ni << " ";
    //out << "Dest Router=" << m_route->dest_router << " ";
    out << "Enqueue Time=" << m_enqueue_time << " ";
    out << "Valid Time=" << m_time << " ";
    */
    out << "]";

    return out.str();
}

