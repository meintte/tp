#ifndef D_A_OBJ_PUMPKIN_H
#define D_A_OBJ_PUMPKIN_H

#include "d/d_bg_s_acch.h"
#include "d/d_cc_d.h"
#include "f_op/f_op_actor_mng.h"

/**
 * @ingroup actors-objects
 * @class daObj_Pumpkin_c
 * @brief Ordon Village Pumpkin
 *
 * @details
 *
 */
class daObj_Pumpkin_c : public fopAc_ac_c {
public:
    /* 80CB578C */ ~daObj_Pumpkin_c();
    /* 80CB5A04 */ void create();
    /* 80CB5F88 */ void CreateHeap();
    /* 80CB6018 */ void Delete();
    /* 80CB604C */ void Execute();
    /* 80CB7638 */ void Draw();
    /* 80CB7824 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80CB7844 */ bool isDelete();
    /* 80CB78C8 */ void setEnvTevColor();
    /* 80CB7924 */ void setRoomNo();
    /* 80CB7968 */ void reset();
    /* 80CB79DC */ void setMtx();
    /* 80CB7AE4 */ void calcRollAngle(s16, int);
    /* 80CB7B84 */ void getWallAngle(s16, s16*);
    /* 80CB7D14 */ void setSmokePrtcl();
    /* 80CB7D98 */ void setWaterPrtcl();
    /* 80CB7E98 */ void setHamonPrtcl();
    /* 80CB7EF4 */ void crash();

private:
    /* 0x568 */ u8 field_0x568[0x56c - 0x568];
    /* 0x56C */ request_of_phase_process_class field_0x56c;
    /* 0x574 */ u8 field_0x574[0x578 - 0x574];
    /* 0x578 */ dBgS_Acch field_0x578;
    /* 0x750 */ dCcD_Stts field_0x750;
    /* 0x78C */ cBgS_PolyInfo field_0x78c;
    /* 0x79C */ u8 field_0x79c[0x7a0 - 0x79c];
    /* 0x7A0 */ cM3dGCir field_0x7a0;
    /* 0x7B4 */ u8 field_0x7b4[0x7cc - 0x7b4];
    /* 0x7CC */ cBgS_GndChk field_0x7cc;   // maybe 0x7b8
    /* 0x808 */ dCcD_GObjInf field_0x808;  // maybe 0x7f4
    /* 0x90C */ u8 field_0x90c[0x944 - 0x90c];
    /* 0x944 */ dCcD_GObjInf field_0x944;  // maybe 0x930
    /* 0xA48 */ u8 field_0xa48[0xaa8 - 0xa48];
    /* 0xAA8 */ dBgS_LinChk field_0xaa8;  // maybe 0xa94
    /* 0xB1A */ u8 field_0xb1a[0xbbc - 0xb1a];
};

STATIC_ASSERT(sizeof(daObj_Pumpkin_c) == 0xbbc);

class daObj_Pumpkin_Param_c {
public:
    /* 80CB8304 */ ~daObj_Pumpkin_Param_c();

    static u8 const m[52];
};

#endif /* D_A_OBJ_PUMPKIN_H */
