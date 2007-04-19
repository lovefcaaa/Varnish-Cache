/*
 * $Id$
 *
 * NB:  This file is machine generated, DO NOT EDIT!
 *
 * Edit vcc_gen_fixed_token.tcl instead
 */

#ifdef VCL_RET_MAC
#ifdef VCL_RET_MAC_E
VCL_RET_MAC_E(error, ERROR, (1 << 0), 0)
#endif
VCL_RET_MAC(lookup, LOOKUP, (1 << 1), 1)
VCL_RET_MAC(hash, HASH, (1 << 2), 2)
VCL_RET_MAC(pipe, PIPE, (1 << 3), 3)
VCL_RET_MAC(pass, PASS, (1 << 4), 4)
VCL_RET_MAC(fetch, FETCH, (1 << 5), 5)
VCL_RET_MAC(insert, INSERT, (1 << 6), 6)
VCL_RET_MAC(deliver, DELIVER, (1 << 7), 7)
VCL_RET_MAC(discard, DISCARD, (1 << 8), 8)
#else
#define VCL_RET_ERROR  (1 << 0)
#define VCL_RET_LOOKUP  (1 << 1)
#define VCL_RET_HASH  (1 << 2)
#define VCL_RET_PIPE  (1 << 3)
#define VCL_RET_PASS  (1 << 4)
#define VCL_RET_FETCH  (1 << 5)
#define VCL_RET_INSERT  (1 << 6)
#define VCL_RET_DELIVER  (1 << 7)
#define VCL_RET_DISCARD  (1 << 8)
#define VCL_RET_MAX 9
#endif

#ifdef VCL_MET_MAC
VCL_MET_MAC(recv,RECV,(VCL_RET_ERROR|VCL_RET_PASS|VCL_RET_PIPE|VCL_RET_LOOKUP))
VCL_MET_MAC(pipe,PIPE,(VCL_RET_ERROR|VCL_RET_PIPE))
VCL_MET_MAC(pass,PASS,(VCL_RET_ERROR|VCL_RET_PASS))
VCL_MET_MAC(hash,HASH,(VCL_RET_HASH))
VCL_MET_MAC(miss,MISS,(VCL_RET_ERROR|VCL_RET_PASS|VCL_RET_FETCH))
VCL_MET_MAC(hit,HIT,(VCL_RET_ERROR|VCL_RET_PASS|VCL_RET_DELIVER))
VCL_MET_MAC(fetch,FETCH,(VCL_RET_ERROR|VCL_RET_PASS|VCL_RET_INSERT))
VCL_MET_MAC(timeout,TIMEOUT,(VCL_RET_FETCH|VCL_RET_DISCARD))
#endif
