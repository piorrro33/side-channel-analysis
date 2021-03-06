/*
 *  This file is part of the optimized implementation of the Picnic signature scheme.
 *  See the accompanying documentation for complete details.
 *
 *  The code is provided under the MIT license, see LICENSE for
 *  more details.
 *  SPDX-License-Identifier: MIT
 */

#ifndef PICNIC3_SIMULATE_H
#define PICNIC3_SIMULATE_H

#include "lowmc_pars.h"

typedef struct randomTape_t randomTape_t;
typedef struct shares_t shares_t;
typedef struct msgs_t msgs_t;
typedef struct picnic_instance_t picnic_instance_t;

typedef int (*lowmc_simulate_online_f)(mzd_local_t* maskedKey, randomTape_t* tapes, msgs_t* msgs,
                                       const mzd_local_t* plaintext, const uint8_t* pubKey);
int lowmc_simulate_online_uint64_129_43(mzd_local_t* maskedKey, randomTape_t* tapes, msgs_t* msgs,
                                        const mzd_local_t* plaintext, const uint8_t* pubKey);

#endif
