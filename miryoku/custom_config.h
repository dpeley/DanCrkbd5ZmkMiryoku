// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

//Aimee's Layers
//nice_nano_v2
//corne_left,corne_right

#if defined (MIRYOKU_KEYBOARD_CORNE)

#define XXX &none

#define MIRYOKU_LAYERMAPPING_BASE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX           K00            K01           K02           K03           K04                  K05           K06           K07           K08           K09           &kp LA(LG(K)) \
XXX           K10            K11           K12           K13           K14                  K15           K16           K17           K18           K19           XXX           \
&kp ENTER     K20            K21           K22           K23           K24                  K25           K26           K27           K28           K29           &kp ENTER     \
                                           K32           K33           K34                  K35           K36           K37

#define MIRYOKU_LAYERMAPPING_TAP( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX           K00           K01           K02           K03           K04                 K05           K06           K07           K08           K09           XXX           \
XXX           K10           K11           K12           K13           K14                 K15           K16           K17           K18           K19           XXX           \
XXX           K20           K21           K22           K23           K24                 K25           K26           K27           K28           K29           XXX           \
                                          K32           K33           K34                 K35           K36           K37

#define MIRYOKU_LAYERMAPPING_NAV( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp LC(A)     &kp LC(Z)     &kp LC(X)     &kp LC(C)     &kp LC(V)     &kp LC(Y)           &kp LC(F)   &kp RC(RS(TAB)) &kp LA(LEFT)  &kp LA(RIGHT) &kp LC(TAB)   XXX           \
&kp BSPC      K10           K11           K12           K13           K14                 K15           K16           K17           K18           K19           XXX           \
&kp ENTER     K20           K21           &kp ENTER     K23           K24                 K25           K26           K27           K28           K29           XXX           \
                                          K32           K33           K34                 K35           K36           K37

#define MIRYOKU_LAYERMAPPING_MOUSE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX         &kp RC(RS(TAB)) &kp LA(LEFT)  &kp LA(RIGHT) &kp LC(TAB)   K04                 &kp LC(Y)     &kp LC(V)     &kp LC(C)     &kp LC(X)     &kp LC(Z)     XXX           \
XXX           K10           K11           K12           K13           K14                 &kp LC(A)     K16           K17           K18           K19           XXX           \
XXX           K20           K21           &kp ENTER     K23           K24                 &kp LC(LA(G)) K26           K27           K28           K29           XXX           \
                                          K32           K33           K34                 K35           K36           K37

#define MIRYOKU_LAYERMAPPING_MEDIA( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX           &bt BT_CLR    K01           K02           K03           K04                 &bt BT_SEL 0  &bt BT_SEL 1  &bt BT_SEL 2  &bt BT_SEL 3  &bt BT_SEL 4  XXX           \
XXX           K10           K11           K12           K13           K14                 K15           K16           K17           K18           K19           XXX           \
XXX           K20           K21           K22           K23           K24                 K25           U_NA          U_NA          U_NA          &kp LA(LG(K)) XXX           \
                                          K32           K33           K34                 K35           K36           K37

#define MIRYOKU_LAYERMAPPING_NUM( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX           K00           K01           K02           K03           K04                 K05           K06           K07           K08           K09           XXX           \
&kp BSPC      K10           K11           K12           K13           K14                 K15           K16           K17           K18           K19           XXX           \
XXX           K20           K21           K22           K23           K24                 K25           K26           K27           K28           K29           XXX           \
                                          K32           K33           K34                 K35           K36           K37
					      
#define MIRYOKU_LAYERMAPPING_SYM( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX           K00           K01           K02           K03           K04                 K05           K06           K07           K08           K09           XXX           \
XXX           K10           K11           K12           K13           K14                 K15           K16           K17           K18           K19           XXX           \
XXX           K20           K21           K22           K23           K24                 K25           K26           K27           K28           K29           XXX           \
                                          K32           K33           K34                 K35           K36           K37

#define MIRYOKU_LAYERMAPPING_FUN( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX           K00           K01           K02           K03           K04                 K05           K06           K07           K08           K09           XXX           \
XXX           K10           K11           K12           K13           K14                 K15           K16           K17           K18           K19           XXX           \
XXX           K20           K21           K22           K23           K24                 K25           K26           K27           K28           K29           XXX           \
                                          K32           K33           K34                 K35           K36           K37

#define MIRYOKU_LAYERMAPPING_BUTTON( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX           K00           K01           K02           K03           K04                 K05           K06           K07           K08           K09           XXX           \
XXX           K10           K11           K12           K13           K14                 K15           K16           K17           K18           K19           XXX           \
XXX           K20           K21           K22           K23           K24                 K25           K26           K27           K28           K29           XXX           \
                                          K32           K33           K34                 K35           K36           K37

#endif
