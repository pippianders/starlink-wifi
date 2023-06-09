// Copyright (c) 2014 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _RX_PPDU_START_H_
#define _RX_PPDU_START_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	rssi_pri_chain0[7:0], rssi_sec20_chain0[15:8], rssi_sec40_chain0[23:16], rssi_sec80_chain0[31:24]
//	1	rssi_pri_chain1[7:0], rssi_sec20_chain1[15:8], rssi_sec40_chain1[23:16], rssi_sec80_chain1[31:24]
//	2	rssi_pri_chain2[7:0], rssi_sec20_chain2[15:8], rssi_sec40_chain2[23:16], rssi_sec80_chain2[31:24]
//	3	rssi_pri_chain3[7:0], rssi_sec20_chain3[15:8], rssi_sec40_chain3[23:16], rssi_sec80_chain3[31:24]
//	4	rssi_comb[7:0], bandwidth[9:8], reserved_4a[15:10], rssi_comb_ht[23:16], reserved_4b[31:24]
//	5	l_sig_rate[3:0], l_sig_rate_select[4], l_sig_length[16:5], l_sig_parity[17], l_sig_tail[23:18], preamble_type[31:24]
//	6	ht_sig_vht_sig_a_1[23:0], captured_implicit_sounding[24], reserved_6[31:25]
//	7	ht_sig_vht_sig_a_2[23:0], reserved_7[31:24]
//	8	vht_sig_b[31:0]
//	9	service[15:0], reserved_9[31:16]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_RX_PPDU_START 10

struct rx_ppdu_start {
             uint32_t rssi_pri_chain0                 :  8, //[7:0]
                      rssi_sec20_chain0               :  8, //[15:8]
                      rssi_sec40_chain0               :  8, //[23:16]
                      rssi_sec80_chain0               :  8; //[31:24]
             uint32_t rssi_pri_chain1                 :  8, //[7:0]
                      rssi_sec20_chain1               :  8, //[15:8]
                      rssi_sec40_chain1               :  8, //[23:16]
                      rssi_sec80_chain1               :  8; //[31:24]
             uint32_t rssi_pri_chain2                 :  8, //[7:0]
                      rssi_sec20_chain2               :  8, //[15:8]
                      rssi_sec40_chain2               :  8, //[23:16]
                      rssi_sec80_chain2               :  8; //[31:24]
             uint32_t rssi_pri_chain3                 :  8, //[7:0]
                      rssi_sec20_chain3               :  8, //[15:8]
                      rssi_sec40_chain3               :  8, //[23:16]
                      rssi_sec80_chain3               :  8; //[31:24]
             uint32_t rssi_comb                       :  8, //[7:0]
                      bandwidth                       :  2, //[9:8]
                      reserved_4a                     :  6, //[15:10]
                      rssi_comb_ht                    :  8, //[23:16]
                      reserved_4b                     :  8; //[31:24]
             uint32_t l_sig_rate                      :  4, //[3:0]
                      l_sig_rate_select               :  1, //[4]
                      l_sig_length                    : 12, //[16:5]
                      l_sig_parity                    :  1, //[17]
                      l_sig_tail                      :  6, //[23:18]
                      preamble_type                   :  8; //[31:24]
             uint32_t ht_sig_vht_sig_a_1              : 24, //[23:0]
                      captured_implicit_sounding      :  1, //[24]
                      reserved_6                      :  7; //[31:25]
             uint32_t ht_sig_vht_sig_a_2              : 24, //[23:0]
                      reserved_7                      :  8; //[31:24]
             uint32_t vht_sig_b                       : 32; //[31:0]
             uint32_t service                         : 16, //[15:0]
                      reserved_9                      : 16; //[31:16]
};

/*

rssi_pri_chain0
			
			RSSI of RX PPDU on chain 0 of primary 20 MHz bandwidth. 
			Value of 0x80 indicates invalid.

rssi_sec20_chain0
			
			RSSI of RX PPDU on chain 0 of secondary 20 MHz
			bandwidth.  Value of 0x80 indicates invalid.

rssi_sec40_chain0
			
			RSSI of RX PPDU on chain 0 of secondary 40 MHz
			bandwidth.  Value of 0x80 indicates invalid.

rssi_sec80_chain0
			
			RSSI of RX PPDU on chain 0 of secondary 80 MHz
			bandwidth.  Value of 0x80 indicates invalid.

rssi_pri_chain1
			
			RSSI of RX PPDU on chain 1 of primary 20 MHz bandwidth. 
			Value of 0x80 indicates invalid.

rssi_sec20_chain1
			
			RSSI of RX PPDU on chain 1 of secondary 20 MHz
			bandwidth.  Value of 0x80 indicates invalid.

rssi_sec40_chain1
			
			RSSI of RX PPDU on chain 1 of secondary 40 MHz
			bandwidth.  Value of 0x80 indicates invalid.

rssi_sec80_chain1
			
			RSSI of RX PPDU on chain 1 of secondary 80 MHz
			bandwidth.  Value of 0x80 indicates invalid.

rssi_pri_chain2
			
			RSSI of RX PPDU on chain 2 of primary 20 MHz bandwidth. 
			Value of 0x80 indicates invalid.

rssi_sec20_chain2
			
			RSSI of RX PPDU on chain 2 of secondary 20 MHz
			bandwidth.  Value of 0x80 indicates invalid.

rssi_sec40_chain2
			
			RSSI of RX PPDU on chain 2 of secondary 40 MHz
			bandwidth.  Value of 0x80 indicates invalid.

rssi_sec80_chain2
			
			RSSI of RX PPDU on chain 2 of secondary 80 MHz
			bandwidth.  Value of 0x80 indicates invalid.

rssi_pri_chain3
			
			RSSI of RX PPDU on chain 3 of primary 20 MHz bandwidth. 
			Value of 0x80 indicates invalid.

rssi_sec20_chain3
			
			RSSI of RX PPDU on chain 3 of secondary 20 MHz
			bandwidth.  Value of 0x80 indicates invalid.

rssi_sec40_chain3
			
			RSSI of RX PPDU on chain 3 of secondary 40 MHz
			bandwidth.  Value of 0x80 indicates invalid.

rssi_sec80_chain3
			
			RSSI of RX PPDU on chain 3 of secondary 80 MHz
			bandwidth.  Value of 0x80 indicates invalid.

rssi_comb
			
			The combined RSSI of the legacy STF of RX PPDU of all
			active chains and bandwidths.

bandwidth
			
			Bandwidth field detected by PHY AGC, prior to decoding
			of (V)HT-SIG fields.
			
			<enum_typedef tx_phy_desc bandwidth>
			
			<enum 0     20_mhz>
			
			<enum 1     40_mhz>
			
			<enum 2     80_mhz>
			
			<enum 3     160_mhz> 
			
			<legal 0-3>

reserved_4a
			
			Reserved: HW should fill with 0, FW should ignore.

rssi_comb_ht
			
			The combined RSSI of the HT/VHT STF of RX PPDU of all
			active chains and bandwidths.  Value of 0x80 indicates
			invalid.

reserved_4b
			
			Reserved: HW should fill with 0, FW should ignore.

l_sig_rate
			
			If l_sig_rate_select is 0:
			
			0x8: OFDM 48 Mbps
			
			0x9: OFDM 24 Mbps
			
			0xA: OFDM 12 Mbps
			
			0xB: OFDM 6 Mbps
			
			0xC: OFDM 54 Mbps
			
			0xD: OFDM 36 Mbps
			
			0xE: OFDM 18 Mbps
			
			0xF: OFDM 9 Mbps
			
			If l_sig_rate_select is 1:
			
			0x1:  DSSS 1 Mbps long preamble
			
			0x2:  DSSS 2 Mbps long preamble
			
			0x3:  CCK 5.5 Mbps long preamble
			
			0x4:  CCK 11 Mbps long preamble
			
			0x5:  DSSS 2 Mbps short preamble
			
			0x6:  CCK 5.5 Mbps preamble
			
			0x7:  CCK 11 Mbps short  preamble

l_sig_rate_select
			
			Legacy signal rate select.  If set then l_sig_rate
			indicates CCK rates.  If clear then l_sig_rate indicates
			OFDM rates.

l_sig_length
			
			Length of legacy frame in octets.

l_sig_parity
			
			Odd parity over l_sig_rate and l_sig_length (TBD Does it
			cover l_sig_rate_select?)

l_sig_tail
			
			Tail bits for Viterbi decoder

preamble_type
			
			Indicates the type of preamble ahead:
			
			
			
			<enum 4 Legacy >
			
			<enum 8 HT>
			
			<enum 12 VHT>
			
			<legal 4, 8, 12>

ht_sig_vht_sig_a_1
			
			If preamble_type == 0x8
			
			HT-SIG (first 24 bits)
			
			If preamble_type == 0xC
			
			VHT-SIG A (first 24 bits)
			
			Else
			
			Reserved

captured_implicit_sounding
			
			From the L_SIG_A TL V from the PHY.  This indicates that
			the PHY has captured implicit sounding.

reserved_6
			
			Reserved: HW should fill with 0, FW should ignore.

ht_sig_vht_sig_a_2
			
			If preamble_type == 0x8
			
			HT-SIG (last 24 bits)
			
			If preamble_type == 0xC
			
			VHT-SIG A (last 24 bits)
			
			Else
			
			Reserved

reserved_7
			
			Reserved: HW should fill with 0, FW should ignore.

vht_sig_b
			
			  Same format as VHT SIG-B as defined in the
			beeliner_mac_phy_interface.docx.

service
			
			Service field from BB for OFDM, HT and VHT packets.  CCK
			packets will have service field of 0.

reserved_9
			
			Reserved: HW should fill with 0, FW should ignore.
*/


/* Description		RX_PPDU_START_0_RSSI_PRI_CHAIN0
			
			RSSI of RX PPDU on chain 0 of primary 20 MHz bandwidth. 
			Value of 0x80 indicates invalid.
*/
#define RX_PPDU_START_0_RSSI_PRI_CHAIN0_OFFSET                       0x00000000
#define RX_PPDU_START_0_RSSI_PRI_CHAIN0_LSB                          0
#define RX_PPDU_START_0_RSSI_PRI_CHAIN0_MASK                         0x000000ff

/* Description		RX_PPDU_START_0_RSSI_SEC20_CHAIN0
			
			RSSI of RX PPDU on chain 0 of secondary 20 MHz
			bandwidth.  Value of 0x80 indicates invalid.
*/
#define RX_PPDU_START_0_RSSI_SEC20_CHAIN0_OFFSET                     0x00000000
#define RX_PPDU_START_0_RSSI_SEC20_CHAIN0_LSB                        8
#define RX_PPDU_START_0_RSSI_SEC20_CHAIN0_MASK                       0x0000ff00

/* Description		RX_PPDU_START_0_RSSI_SEC40_CHAIN0
			
			RSSI of RX PPDU on chain 0 of secondary 40 MHz
			bandwidth.  Value of 0x80 indicates invalid.
*/
#define RX_PPDU_START_0_RSSI_SEC40_CHAIN0_OFFSET                     0x00000000
#define RX_PPDU_START_0_RSSI_SEC40_CHAIN0_LSB                        16
#define RX_PPDU_START_0_RSSI_SEC40_CHAIN0_MASK                       0x00ff0000

/* Description		RX_PPDU_START_0_RSSI_SEC80_CHAIN0
			
			RSSI of RX PPDU on chain 0 of secondary 80 MHz
			bandwidth.  Value of 0x80 indicates invalid.
*/
#define RX_PPDU_START_0_RSSI_SEC80_CHAIN0_OFFSET                     0x00000000
#define RX_PPDU_START_0_RSSI_SEC80_CHAIN0_LSB                        24
#define RX_PPDU_START_0_RSSI_SEC80_CHAIN0_MASK                       0xff000000

/* Description		RX_PPDU_START_1_RSSI_PRI_CHAIN1
			
			RSSI of RX PPDU on chain 1 of primary 20 MHz bandwidth. 
			Value of 0x80 indicates invalid.
*/
#define RX_PPDU_START_1_RSSI_PRI_CHAIN1_OFFSET                       0x00000004
#define RX_PPDU_START_1_RSSI_PRI_CHAIN1_LSB                          0
#define RX_PPDU_START_1_RSSI_PRI_CHAIN1_MASK                         0x000000ff

/* Description		RX_PPDU_START_1_RSSI_SEC20_CHAIN1
			
			RSSI of RX PPDU on chain 1 of secondary 20 MHz
			bandwidth.  Value of 0x80 indicates invalid.
*/
#define RX_PPDU_START_1_RSSI_SEC20_CHAIN1_OFFSET                     0x00000004
#define RX_PPDU_START_1_RSSI_SEC20_CHAIN1_LSB                        8
#define RX_PPDU_START_1_RSSI_SEC20_CHAIN1_MASK                       0x0000ff00

/* Description		RX_PPDU_START_1_RSSI_SEC40_CHAIN1
			
			RSSI of RX PPDU on chain 1 of secondary 40 MHz
			bandwidth.  Value of 0x80 indicates invalid.
*/
#define RX_PPDU_START_1_RSSI_SEC40_CHAIN1_OFFSET                     0x00000004
#define RX_PPDU_START_1_RSSI_SEC40_CHAIN1_LSB                        16
#define RX_PPDU_START_1_RSSI_SEC40_CHAIN1_MASK                       0x00ff0000

/* Description		RX_PPDU_START_1_RSSI_SEC80_CHAIN1
			
			RSSI of RX PPDU on chain 1 of secondary 80 MHz
			bandwidth.  Value of 0x80 indicates invalid.
*/
#define RX_PPDU_START_1_RSSI_SEC80_CHAIN1_OFFSET                     0x00000004
#define RX_PPDU_START_1_RSSI_SEC80_CHAIN1_LSB                        24
#define RX_PPDU_START_1_RSSI_SEC80_CHAIN1_MASK                       0xff000000

/* Description		RX_PPDU_START_2_RSSI_PRI_CHAIN2
			
			RSSI of RX PPDU on chain 2 of primary 20 MHz bandwidth. 
			Value of 0x80 indicates invalid.
*/
#define RX_PPDU_START_2_RSSI_PRI_CHAIN2_OFFSET                       0x00000008
#define RX_PPDU_START_2_RSSI_PRI_CHAIN2_LSB                          0
#define RX_PPDU_START_2_RSSI_PRI_CHAIN2_MASK                         0x000000ff

/* Description		RX_PPDU_START_2_RSSI_SEC20_CHAIN2
			
			RSSI of RX PPDU on chain 2 of secondary 20 MHz
			bandwidth.  Value of 0x80 indicates invalid.
*/
#define RX_PPDU_START_2_RSSI_SEC20_CHAIN2_OFFSET                     0x00000008
#define RX_PPDU_START_2_RSSI_SEC20_CHAIN2_LSB                        8
#define RX_PPDU_START_2_RSSI_SEC20_CHAIN2_MASK                       0x0000ff00

/* Description		RX_PPDU_START_2_RSSI_SEC40_CHAIN2
			
			RSSI of RX PPDU on chain 2 of secondary 40 MHz
			bandwidth.  Value of 0x80 indicates invalid.
*/
#define RX_PPDU_START_2_RSSI_SEC40_CHAIN2_OFFSET                     0x00000008
#define RX_PPDU_START_2_RSSI_SEC40_CHAIN2_LSB                        16
#define RX_PPDU_START_2_RSSI_SEC40_CHAIN2_MASK                       0x00ff0000

/* Description		RX_PPDU_START_2_RSSI_SEC80_CHAIN2
			
			RSSI of RX PPDU on chain 2 of secondary 80 MHz
			bandwidth.  Value of 0x80 indicates invalid.
*/
#define RX_PPDU_START_2_RSSI_SEC80_CHAIN2_OFFSET                     0x00000008
#define RX_PPDU_START_2_RSSI_SEC80_CHAIN2_LSB                        24
#define RX_PPDU_START_2_RSSI_SEC80_CHAIN2_MASK                       0xff000000

/* Description		RX_PPDU_START_3_RSSI_PRI_CHAIN3
			
			RSSI of RX PPDU on chain 3 of primary 20 MHz bandwidth. 
			Value of 0x80 indicates invalid.
*/
#define RX_PPDU_START_3_RSSI_PRI_CHAIN3_OFFSET                       0x0000000c
#define RX_PPDU_START_3_RSSI_PRI_CHAIN3_LSB                          0
#define RX_PPDU_START_3_RSSI_PRI_CHAIN3_MASK                         0x000000ff

/* Description		RX_PPDU_START_3_RSSI_SEC20_CHAIN3
			
			RSSI of RX PPDU on chain 3 of secondary 20 MHz
			bandwidth.  Value of 0x80 indicates invalid.
*/
#define RX_PPDU_START_3_RSSI_SEC20_CHAIN3_OFFSET                     0x0000000c
#define RX_PPDU_START_3_RSSI_SEC20_CHAIN3_LSB                        8
#define RX_PPDU_START_3_RSSI_SEC20_CHAIN3_MASK                       0x0000ff00

/* Description		RX_PPDU_START_3_RSSI_SEC40_CHAIN3
			
			RSSI of RX PPDU on chain 3 of secondary 40 MHz
			bandwidth.  Value of 0x80 indicates invalid.
*/
#define RX_PPDU_START_3_RSSI_SEC40_CHAIN3_OFFSET                     0x0000000c
#define RX_PPDU_START_3_RSSI_SEC40_CHAIN3_LSB                        16
#define RX_PPDU_START_3_RSSI_SEC40_CHAIN3_MASK                       0x00ff0000

/* Description		RX_PPDU_START_3_RSSI_SEC80_CHAIN3
			
			RSSI of RX PPDU on chain 3 of secondary 80 MHz
			bandwidth.  Value of 0x80 indicates invalid.
*/
#define RX_PPDU_START_3_RSSI_SEC80_CHAIN3_OFFSET                     0x0000000c
#define RX_PPDU_START_3_RSSI_SEC80_CHAIN3_LSB                        24
#define RX_PPDU_START_3_RSSI_SEC80_CHAIN3_MASK                       0xff000000

/* Description		RX_PPDU_START_4_RSSI_COMB
			
			The combined RSSI of the legacy STF of RX PPDU of all
			active chains and bandwidths.
*/
#define RX_PPDU_START_4_RSSI_COMB_OFFSET                             0x00000010
#define RX_PPDU_START_4_RSSI_COMB_LSB                                0
#define RX_PPDU_START_4_RSSI_COMB_MASK                               0x000000ff

/* Description		RX_PPDU_START_4_BANDWIDTH
			
			Bandwidth field detected by PHY AGC, prior to decoding
			of (V)HT-SIG fields.
			
			<enum_typedef tx_phy_desc bandwidth>
			
			<enum 0     20_mhz>
			
			<enum 1     40_mhz>
			
			<enum 2     80_mhz>
			
			<enum 3     160_mhz> 
			
			<legal 0-3>
*/
#define RX_PPDU_START_4_BANDWIDTH_OFFSET                             0x00000010
#define RX_PPDU_START_4_BANDWIDTH_LSB                                8
#define RX_PPDU_START_4_BANDWIDTH_MASK                               0x00000300

/* Description		RX_PPDU_START_4_RESERVED_4A
			
			Reserved: HW should fill with 0, FW should ignore.
*/
#define RX_PPDU_START_4_RESERVED_4A_OFFSET                           0x00000010
#define RX_PPDU_START_4_RESERVED_4A_LSB                              10
#define RX_PPDU_START_4_RESERVED_4A_MASK                             0x0000fc00

/* Description		RX_PPDU_START_4_RSSI_COMB_HT
			
			The combined RSSI of the HT/VHT STF of RX PPDU of all
			active chains and bandwidths.  Value of 0x80 indicates
			invalid.
*/
#define RX_PPDU_START_4_RSSI_COMB_HT_OFFSET                          0x00000010
#define RX_PPDU_START_4_RSSI_COMB_HT_LSB                             16
#define RX_PPDU_START_4_RSSI_COMB_HT_MASK                            0x00ff0000

/* Description		RX_PPDU_START_4_RESERVED_4B
			
			Reserved: HW should fill with 0, FW should ignore.
*/
#define RX_PPDU_START_4_RESERVED_4B_OFFSET                           0x00000010
#define RX_PPDU_START_4_RESERVED_4B_LSB                              24
#define RX_PPDU_START_4_RESERVED_4B_MASK                             0xff000000

/* Description		RX_PPDU_START_5_L_SIG_RATE
			
			If l_sig_rate_select is 0:
			
			0x8: OFDM 48 Mbps
			
			0x9: OFDM 24 Mbps
			
			0xA: OFDM 12 Mbps
			
			0xB: OFDM 6 Mbps
			
			0xC: OFDM 54 Mbps
			
			0xD: OFDM 36 Mbps
			
			0xE: OFDM 18 Mbps
			
			0xF: OFDM 9 Mbps
			
			If l_sig_rate_select is 1:
			
			0x1:  DSSS 1 Mbps long preamble
			
			0x2:  DSSS 2 Mbps long preamble
			
			0x3:  CCK 5.5 Mbps long preamble
			
			0x4:  CCK 11 Mbps long preamble
			
			0x5:  DSSS 2 Mbps short preamble
			
			0x6:  CCK 5.5 Mbps preamble
			
			0x7:  CCK 11 Mbps short  preamble
*/
#define RX_PPDU_START_5_L_SIG_RATE_OFFSET                            0x00000014
#define RX_PPDU_START_5_L_SIG_RATE_LSB                               0
#define RX_PPDU_START_5_L_SIG_RATE_MASK                              0x0000000f

/* Description		RX_PPDU_START_5_L_SIG_RATE_SELECT
			
			Legacy signal rate select.  If set then l_sig_rate
			indicates CCK rates.  If clear then l_sig_rate indicates
			OFDM rates.
*/
#define RX_PPDU_START_5_L_SIG_RATE_SELECT_OFFSET                     0x00000014
#define RX_PPDU_START_5_L_SIG_RATE_SELECT_LSB                        4
#define RX_PPDU_START_5_L_SIG_RATE_SELECT_MASK                       0x00000010

/* Description		RX_PPDU_START_5_L_SIG_LENGTH
			
			Length of legacy frame in octets.
*/
#define RX_PPDU_START_5_L_SIG_LENGTH_OFFSET                          0x00000014
#define RX_PPDU_START_5_L_SIG_LENGTH_LSB                             5
#define RX_PPDU_START_5_L_SIG_LENGTH_MASK                            0x0001ffe0

/* Description		RX_PPDU_START_5_L_SIG_PARITY
			
			Odd parity over l_sig_rate and l_sig_length (TBD Does it
			cover l_sig_rate_select?)
*/
#define RX_PPDU_START_5_L_SIG_PARITY_OFFSET                          0x00000014
#define RX_PPDU_START_5_L_SIG_PARITY_LSB                             17
#define RX_PPDU_START_5_L_SIG_PARITY_MASK                            0x00020000

/* Description		RX_PPDU_START_5_L_SIG_TAIL
			
			Tail bits for Viterbi decoder
*/
#define RX_PPDU_START_5_L_SIG_TAIL_OFFSET                            0x00000014
#define RX_PPDU_START_5_L_SIG_TAIL_LSB                               18
#define RX_PPDU_START_5_L_SIG_TAIL_MASK                              0x00fc0000

/* Description		RX_PPDU_START_5_PREAMBLE_TYPE
			
			Indicates the type of preamble ahead:
			
			
			
			<enum 4 Legacy >
			
			<enum 8 HT>
			
			<enum 12 VHT>
			
			<legal 4, 8, 12>
*/
#define RX_PPDU_START_5_PREAMBLE_TYPE_OFFSET                         0x00000014
#define RX_PPDU_START_5_PREAMBLE_TYPE_LSB                            24
#define RX_PPDU_START_5_PREAMBLE_TYPE_MASK                           0xff000000

/* Description		RX_PPDU_START_6_HT_SIG_VHT_SIG_A_1
			
			If preamble_type == 0x8
			
			HT-SIG (first 24 bits)
			
			If preamble_type == 0xC
			
			VHT-SIG A (first 24 bits)
			
			Else
			
			Reserved
*/
#define RX_PPDU_START_6_HT_SIG_VHT_SIG_A_1_OFFSET                    0x00000018
#define RX_PPDU_START_6_HT_SIG_VHT_SIG_A_1_LSB                       0
#define RX_PPDU_START_6_HT_SIG_VHT_SIG_A_1_MASK                      0x00ffffff

/* Description		RX_PPDU_START_6_CAPTURED_IMPLICIT_SOUNDING
			
			From the L_SIG_A TL V from the PHY.  This indicates that
			the PHY has captured implicit sounding.
*/
#define RX_PPDU_START_6_CAPTURED_IMPLICIT_SOUNDING_OFFSET            0x00000018
#define RX_PPDU_START_6_CAPTURED_IMPLICIT_SOUNDING_LSB               24
#define RX_PPDU_START_6_CAPTURED_IMPLICIT_SOUNDING_MASK              0x01000000

/* Description		RX_PPDU_START_6_RESERVED_6
			
			Reserved: HW should fill with 0, FW should ignore.
*/
#define RX_PPDU_START_6_RESERVED_6_OFFSET                            0x00000018
#define RX_PPDU_START_6_RESERVED_6_LSB                               25
#define RX_PPDU_START_6_RESERVED_6_MASK                              0xfe000000

/* Description		RX_PPDU_START_7_HT_SIG_VHT_SIG_A_2
			
			If preamble_type == 0x8
			
			HT-SIG (last 24 bits)
			
			If preamble_type == 0xC
			
			VHT-SIG A (last 24 bits)
			
			Else
			
			Reserved
*/
#define RX_PPDU_START_7_HT_SIG_VHT_SIG_A_2_OFFSET                    0x0000001c
#define RX_PPDU_START_7_HT_SIG_VHT_SIG_A_2_LSB                       0
#define RX_PPDU_START_7_HT_SIG_VHT_SIG_A_2_MASK                      0x00ffffff

/* Description		RX_PPDU_START_7_RESERVED_7
			
			Reserved: HW should fill with 0, FW should ignore.
*/
#define RX_PPDU_START_7_RESERVED_7_OFFSET                            0x0000001c
#define RX_PPDU_START_7_RESERVED_7_LSB                               24
#define RX_PPDU_START_7_RESERVED_7_MASK                              0xff000000

/* Description		RX_PPDU_START_8_VHT_SIG_B
			
			  Same format as VHT SIG-B as defined in the
			beeliner_mac_phy_interface.docx.
*/
#define RX_PPDU_START_8_VHT_SIG_B_OFFSET                             0x00000020
#define RX_PPDU_START_8_VHT_SIG_B_LSB                                0
#define RX_PPDU_START_8_VHT_SIG_B_MASK                               0xffffffff

/* Description		RX_PPDU_START_9_SERVICE
			
			Service field from BB for OFDM, HT and VHT packets.  CCK
			packets will have service field of 0.
*/
#define RX_PPDU_START_9_SERVICE_OFFSET                               0x00000024
#define RX_PPDU_START_9_SERVICE_LSB                                  0
#define RX_PPDU_START_9_SERVICE_MASK                                 0x0000ffff

/* Description		RX_PPDU_START_9_RESERVED_9
			
			Reserved: HW should fill with 0, FW should ignore.
*/
#define RX_PPDU_START_9_RESERVED_9_OFFSET                            0x00000024
#define RX_PPDU_START_9_RESERVED_9_LSB                               16
#define RX_PPDU_START_9_RESERVED_9_MASK                              0xffff0000


#endif // _RX_PPDU_START_H_
