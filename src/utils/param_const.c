/****************************************************************************
**
** Copyright (C) 2014 Stiftung Secure Information and 
**                    Communication Technologies SIC and
**                    Graz University of Technology
** Contact: http://opensource.iaik.tugraz.at
**
** This file is part of <product_name>.
**
** $BEGIN_LICENSE:DEFAULT$
** Commercial License Usage
** Licensees holding valid commercial licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and SIC. For further information
** contact us at http://opensource.iaik.tugraz.at.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
** 
** This software is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this software. If not, see http://www.gnu.org/licenses/.
**
** $END_LICENSE:DEFAULT$
**
****************************************************************************/

#include "../types.h"

const uint_t SECP192R1_COFACTOR = 1;
const uint_t SECP192R1_BASE_X[6] = {0x332FA108, 0x0D8CB30C, 0x76D12909, 0x8A4BD3F7, 0xF3D218F7, 0x954CC8F9};
const uint_t SECP192R1_BASE_Y[6] = {0x1E422289, 0x7B12A337, 0x8966F05E, 0xDE22B524, 0x6AEDA84D, 0x6A293D83};
const uint_t SECP192R1_A[6] = {0xFFFFFFFC, 0xFFFFFFFF, 0xFFFFFFFB, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF};
const uint_t SECP192R1_B[6] = {0xA6E33A98, 0x62D9E406, 0x19076AE2, 0x7281CDB2, 0x57C0B131, 0x73C8EEC5};
const uint_t SECP192R1_ORDER_N_BITS = 192;
const uint_t SECP192R1_PRIME_BITS = 192;
const uint_t SECP192R1_ORDER_N[6] = {0xB4D22831, 0x146BC9B1, 0x99DEF836, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF};
const uint_t SECP192R1_PRIME[6] = {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFE, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF};

const uint_t SECP224R1_COFACTOR = 1;
const uint_t SECP224R1_BASE_X[7] = {0xBC905227, 0x6018BFAA, 0xF22FE220, 0xF96BEC04, 0x6DD3AF9B, 0xA21B5E60, 0x92F5B516};
const uint_t SECP224R1_BASE_Y[7] = {0x2EDCA1E6, 0x05335A6B, 0xE8C15513, 0x03DFE878, 0xAEA9C5AE, 0x614786F1, 0x100C1218};
const uint_t SECP224R1_A[7] = {0x00000004, 0x00000000, 0x00000000, 0xFFFFFFFC, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF};
const uint_t SECP224R1_B[7] = {0xE768CDF7, 0xCCF01310, 0x743B1CC0, 0xC8528150, 0x3DCEBA98, 0x7FC02F93, 0x9C3FA633};
const uint_t SECP224R1_ORDER_N_BITS = 224;
const uint_t SECP224R1_PRIME_BITS = 224;
const uint_t SECP224R1_ORDER_N[7] = {0x5C5C2A3D, 0x13DD2945, 0xE0B8F03E, 0xFFFF16A2, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF};
const uint_t SECP224R1_PRIME[7] = {0x00000001, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF};

const uint_t SECP256R1_COFACTOR = 1;
const uint_t SECP256R1_BASE_X[8]
    = {0x18A9143C, 0x79E730D4, 0x5FEDB601, 0x75BA95FC, 0x77622510, 0x79FB732B, 0xA53755C6, 0x18905F76};
const uint_t SECP256R1_BASE_Y[8]
    = {0xCE95560A, 0xDDF25357, 0xBA19E45C, 0x8B4AB8E4, 0xDD21F325, 0xD2E88688, 0x25885D85, 0x8571FF18};
const uint_t SECP256R1_A[8] = {0xFFFFFFFC, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000003, 0x00000000, 0x00000000, 0x00000004, 0xFFFFFFFC};
const uint_t SECP256R1_B[8] = {0x29C4BDDF, 0xD89CDF62, 0x78843090, 0xACF005CD, 0xF7212ED6, 0xE5A220AB, 0x04874834, 0xDC30061D};
const uint_t SECP256R1_ORDER_N_BITS = 256;
const uint_t SECP256R1_PRIME_BITS = 256;
const uint_t SECP256R1_ORDER_N[8]
    = {0xFC632551, 0xF3B9CAC2, 0xA7179E84, 0xBCE6FAAD, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0xFFFFFFFF};
const uint_t SECP256R1_PRIME[8]
    = {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xFFFFFFFF};

const uint_t SECP384R1_COFACTOR = 1;
const uint_t SECP384R1_BASE_X[12] = {0x49C0B528,
                                     0x3DD07566,
                                     0xA0D6CE38,
                                     0x20E378E2,
                                     0x541B4D6E,
                                     0x879C3AFC,
                                     0x59A30EFF,
                                     0x64548684,
                                     0x614EDE2B,
                                     0x812FF723,
                                     0x299E1513,
                                     0x4D3AADC2};
const uint_t SECP384R1_BASE_Y[12] = {0x4B03A4FE,
                                     0x23043DAD,
                                     0x7BB4A9AC,
                                     0xA1BFA8BF,
                                     0x2E83B050,
                                     0x8BADE756,
                                     0x68F4FFD9,
                                     0xC6C35219,
                                     0x3969A840,
                                     0xDD800226,
                                     0x5A15C5E9,
                                     0x2B78ABC2};
const uint_t SECP384R1_A[12] = {0xFFFFFFFC,
                                0x00000003,
                                0x00000000,
                                0xFFFFFFFC,
                                0xFFFFFFFB,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                0xFFFFFFFF};
const uint_t SECP384R1_B[12] = {0x9D412DCC,
                                0x08118871,
                                0x7A4C32EC,
                                0xF729ADD8,
                                0x1920022E,
                                0x77F2209B,
                                0x94938AE2,
                                0xE3374BEE,
                                0x1F022094,
                                0xB62B21F4,
                                0x604FBFF9,
                                0xCD08114B};
const uint_t SECP384R1_ORDER_N_BITS = 384;
const uint_t SECP384R1_PRIME_BITS = 384;
const uint_t SECP384R1_ORDER_N[12] = {0xCCC52973,
                                      0xECEC196A,
                                      0x48B0A77A,
                                      0x581A0DB2,
                                      0xF4372DDF,
                                      0xC7634D81,
                                      0xFFFFFFFF,
                                      0xFFFFFFFF,
                                      0xFFFFFFFF,
                                      0xFFFFFFFF,
                                      0xFFFFFFFF,
                                      0xFFFFFFFF};
const uint_t SECP384R1_PRIME[12] = {0xFFFFFFFF,
                                    0x00000000,
                                    0x00000000,
                                    0xFFFFFFFF,
                                    0xFFFFFFFE,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF};

const uint_t SECP521R1_COFACTOR = 1;
const uint_t SECP521R1_BASE_X[17] = {0xB331A163,
                                     0x18E172DE,
                                     0x4DFCBF3F,
                                     0xE0C2B521,
                                     0x6F19A459,
                                     0x93D17FD4,
                                     0x947F0EE0,
                                     0x3BF7F3AC,
                                     0xDD50A5AF,
                                     0xB035A69E,
                                     0x90FC1457,
                                     0x9C829FDA,
                                     0x214E3240,
                                     0xB311CADA,
                                     0xE6CF1F65,
                                     0x5B820274,
                                     0x00000103};
const uint_t SECP521R1_BASE_Y[17] = {0x28460E4A,
                                     0x3B4FE8B3,
                                     0x20445F4A,
                                     0x43513961,
                                     0xB09A9E38,
                                     0x809FD683,
                                     0x2062A85C,
                                     0x4CAF7A13,
                                     0x164BF739,
                                     0x8B939F33,
                                     0x340BD7DE,
                                     0x24ABCDA2,
                                     0xECCC7AA2,
                                     0xDA163E8D,
                                     0x022E452F,
                                     0x3C4D1DE0,
                                     0x000000B5};
const uint_t SECP521R1_A[17] = {0xFE7FFFFF,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                0xFFFFFFFF,
                                0x000001FF};
const uint_t SECP521R1_B[17] = {0x8014654F,
                                0xEA35A81F,
                                0x78F7A28F,
                                0xC41E961A,
                                0x839AB9EF,
                                0x5E9DD8DF,
                                0xBD8B2960,
                                0xA8F63F49,
                                0xF0AB0C9C,
                                0xC8C77884,
                                0xF9DC5A44,
                                0x2DCCD98A,
                                0x77516D39,
                                0xD05B42A0,
                                0x0FC94D10,
                                0xB0C70E4D,
                                0x0000015C};
const uint_t SECP521R1_ORDER_N_BITS = 521;
const uint_t SECP521R1_PRIME_BITS = 521;
const uint_t SECP521R1_ORDER_N[17] = {0x91386409,
                                      0xBB6FB71E,
                                      0x899C47AE,
                                      0x3BB5C9B8,
                                      0xF709A5D0,
                                      0x7FCC0148,
                                      0xBF2F966B,
                                      0x51868783,
                                      0xFFFFFFFA,
                                      0xFFFFFFFF,
                                      0xFFFFFFFF,
                                      0xFFFFFFFF,
                                      0xFFFFFFFF,
                                      0xFFFFFFFF,
                                      0xFFFFFFFF,
                                      0xFFFFFFFF,
                                      0x000001FF};
const uint_t SECP521R1_PRIME[17] = {0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0xFFFFFFFF,
                                    0x000001FF};
