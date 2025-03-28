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
    /* 80CB5F88 */ bool CreateHeap();
    /* 80CB6018 */ bool Delete();
    /* 80CB604C */ bool Execute();
    /* 80CB7638 */ bool Draw();
    /* 80CB7824 */ void createHeapCallBack(fopAc_ac_c*);
    /* 80CB7844 */ bool isDelete();
    /* 80CB78C8 */ void setEnvTevColor();
    /* 80CB7924 */ void setRoomNo();
    /* 80CB7968 */ void reset();
    /* 80CB79DC */ void setMtx();
    /* 80CB7AE4 */ s16 calcRollAngle(s16, int);
    /* 80CB7B84 */ bool getWallAngle(s16, s16*);
    /* 80CB7D14 */ void setSmokePrtcl();
    /* 80CB7D98 */ void setWaterPrtcl();
    /* 80CB7E98 */ void setHamonPrtcl();
    /* 80CB7EF4 */ void crash();

    void getProcType();
    void getItemTableNo();
    void getType();

private:
    /* 0x568 */ u8 field_0x568[0x56c - 0x568];
    /* 0x56C */ request_of_phase_process_class field_0x56c;
    /* 0x574 */ J3DModel* field_0x574;
    /* 0x578 */ dBgS_Acch field_0x578;
    /* 0x750 */ dCcD_Stts field_0x750;
    /* 0x78C */ dBgS_AcchCir field_0x78c;
    /* 0x7CC */ cBgS_GndChk field_0x7cc;
    /* 0x808 */ dCcD_GObjInf field_0x808;
    /* 0x90C */ u8 field_0x90c[0x92c - 0x90c];
    /* 0x92C */ cM3dGCyl field_0x92c;
    /* 0x944 */ dCcD_GObjInf field_0x944;
    /* 0xA48 */ u8 field_0xa48[0xa68 - 0xa48];
    /* 0xA68 */ cM3dGCyl field_0xa68;
    /* 0xA80 */ u8 field_0xa80[0xaa8 - 0xa80];
    /* 0xAA8 */ dBgS_LinChk field_0xaa8;
    /* 0xB18 */ f32 field_0xb18;
    /* 0xB1C */ char field_0xb1c;
    /* 0xB1D */ u8 field_0xb1d[0xb20 - 0xb1d];
    /* 0xB20 */ float field_0xb20;
    /* 0xB24 */ float field_0xb24;
    /* 0xB28 */ float field_0xb28;
    /* 0xB2C */ float field_0xb2c;  // maybe begin of cXyz
    /* 0xB30 */ float field_0xb30;
    /* 0xB34 */ float field_0xb34;
    /* 0xB38 */ u8 field_0xb38[0xb48 - 0xb38];
    /* 0xB48 */ u32 field_0xb48;
    /* 0xB4C */ u32 field_0xb4c;
    /* 0xB50 */ int field_0xb50;
    /* 0xB54 */ int field_0xb54;
    /* 0xB58 */ int field_0xb58;
    /* 0xB5C */ float field_0xb5c;
    /* 0xB60 */ f32 field_0xb60;
    /* 0xB64 */ f32 field_0xb64;
    /* 0xB68 */ float field_0xb68;
    /* 0xB6C */ u8 field_0xb6c[0xb7c - 0xb6c];
    /* 0xB7C */ s16 mRollAngle;
    /* 0xB7E */ u8 field_0xb7e[0xb98 - 0xb7e];
    /* 0xB98 */ u32 field_0xb98;
    /* 0xB9C */ u8 field_0xb9c[0xba0 - 0xb9c];
    /* 0xBA0 */ u32 field_0xba0;
    /* 0xBA4 */ u32 field_0xba4;
    /* 0xBA8 */ bool field_0xba8;
    /* 0xBA9 */ u8 field_0xba9[0xbad - 0xba9];
    /* 0xBAD */ bool field_0xbad;
    /* 0xBAE */ bool field_0xbae;
    /* 0xBAF */ u8 field_0xbaf[0xbb0 - 0xbaf];
    /* 0xBB0 */ bool field_0xbb0;
    /* 0xBB1 */ bool field_0xbb1;
    /* 0xBB2 */ u8 field_0xbb2;
    /* 0xBB3 */ bool field_0xbb3;
    /* 0xBB4 */ u8 field_0xbb4[0xbbc - 0xbb4];
};

STATIC_ASSERT(sizeof(daObj_Pumpkin_c) == 0xbbc);

class daObj_Pumpkin_Param_c : public fopAc_ac_c {
public:
    /* 80CB8304 */ virtual ~daObj_Pumpkin_Param_c();

    static u8 const m[52];

    dBgS_ObjAcch field_0;
};

#endif /* D_A_OBJ_PUMPKIN_H */
