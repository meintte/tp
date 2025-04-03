#ifndef D_A_OBJ_POCANDLE_H
#define D_A_OBJ_POCANDLE_H

#include "d/d_bg_s_movebg_actor.h"
#include "d/d_event_lib.h"
#include "f_op/f_op_actor_mng.h"

/**
 * @ingroup actors-objects
 * @class daPoCandle_c
 * @brief Poe Torch
 *
 * @details
 *
 */

struct fakePoCandlePadding {
    u8 padding[8];
};

class daPoCandle_c : public dBgS_MoveBgActor, public fakePoCandlePadding, public dEvLib_callback_c {
public:
    enum Mode {
        MODE_WAIT = 0,
        // MODE_WAIT_EVENT = 1,
        // MODE_CLOSE = 2,
        // MODE_CLOSE_EVENT = 3,
        // MODE_CLOSE_END = 4,
        // MODE_OPEN = 5
    };

    /* 80CB1AE4 */ void setBaseMtx();
    /* 80CB1B6C */ int CreateHeap();
    /* 80CB1BD8 */ cPhs__Step create();
    /* 80CB1D74 */ void lightInit();
    /* 80CB1E00 */ void setLight();
    /* 80CB1E30 */ void cutLight();
    /* 80CB1E60 */ void pointLightProc();
    /* 80CB1F10 */ int Execute(f32 (**)[3][4]);
    /* 80CB2140 */ void init_modeWait();
    /* 80CB214C */ void modeWait();
    /* 80CB21D8 */ void init_modeOnFire();
    /* 80CB22D4 */ void modeOnFire();
    /* 80CB22F4 */ void modeOnSwWait();
    /* 80CB2354 */ void init_modeEnd();
    /* 80CB2360 */ void modeEnd();
    /* 80CB2364 */ bool eventStart();
    /* 80CB2388 */ int Draw();
    /* 80CB242C */ int Delete();

    daPoCandle_c() : dEvLib_callback_c(this) {}
    /* 80CB2610 */ ~daPoCandle_c();

    /* 80CB3E3C */ void getFirePos();  // implemented in d_a_obj_poFire.cpp

    inline u32 getSwBit() { return fopAcM_GetParamBit(this, 0, 8); }
    inline u32 getID() { return fopAcM_GetParamBit(this, 8, 8); }
    inline u32 getLightType() { return fopAcM_GetParamBit(this, 16, 8); }

private:
    /* 0x5B8 */ request_of_phase_process_class mPhaseReq;
    /* 0x5C0 */ J3DModel* mpModel;
    /* 0x5C4 */ cXyz field_0x5c4;
    /* 0x5D0 */ u8 field_0x5d0;
    /* 0x5D1 */ bool field_0x5d1;
    /* 0x5D2 */ u8 field_0x5d2;
    /* 0x5D3 */ u8 field_0x5d3;
    /* 0x5D4 */ u8 field_0x5d4;
    /* 0x5D5 */ u8 field_0x5d5;
    /* 0x5D6 */ u8 field_0x5d6;
    /* 0x5D7 */ u8 field_0x5d7;
    /* 0x5D8 */ u8 field_0x5d8;
    /* 0x5D9 */ u8 field_0x5d9[0x5dc - 0x5d9];
    /* 0x5DC */ u32 field_0x5dc;
    /* 0x5E0 */ cXyz mLightPos;
    /* 0x5EC */ u8 field_0x5ec;
    /* 0x5ED */ u8 field_0x5ed[0x5f0 - 0x5ed];
    /* 0x5F0 */ float field_0x5f0;
    /* 0x5F4 */ LIGHT_INFLUENCE mLightInfluence;
};

STATIC_ASSERT(sizeof(daPoCandle_c) == 0x614);

class daPoCandle_HIO_c : public mDoHIO_entry_c {
public:
    /* 80CB1A6C */ daPoCandle_HIO_c();
    /* 80CB2508 */ ~daPoCandle_HIO_c();

    /* 0x4 */ u8 field_0x4;
    /* 0x5 */ u8 field_0x5[0x8 - 0x5];
    /* 0x8 */ float field_0x8;
};

#endif /* D_A_OBJ_POCANDLE_H */
