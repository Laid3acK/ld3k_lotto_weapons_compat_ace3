class CfgPatches
{
    class ld3k_lotto_weapons_compat_ace3
    {
        requiredAddons[]=
        {
            "lot_aaf_mk12",
            "lot_aaf_scar",
            "lot_aaf_scar_l"
        };
        requiredversion=0.1;
        units[]={};
        weapons[]={};
    };
};
class asdg_MuzzleSlot_556;
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
    class InventoryMuzzleItem_Base_F;
    class ItemCore;
    class Rifle;
    class Rifle_Base_F: Rifle
    {
        class WeaponSlotsInfo;
    };
    class JCA_arifle_SR10_base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
        };
        class single: Mode_SemiAuto
        {
        };
    };
    class JCA_arifle_SR10_AFG_base_F: JCA_arifle_SR10_base_F
    {
    };
    class JCA_arifle_SR10_VFG_base_F: JCA_arifle_SR10_base_F
    {
    };
    class JCA_arifle_SR10_AFG_black_F: JCA_arifle_SR10_AFG_base_F
    {
        class WeaponSlotsInfo;
        class Single;
    };
    class JCA_arifle_SR10_VFG_black_F: JCA_arifle_SR10_VFG_base_F
    {
        class WeaponSlotsInfo;
        class Single;
    };
    class JCA_arifle_SR10_AFG_sand_F: JCA_arifle_SR10_AFG_base_F
    {
        class WeaponSlotsInfo;
        class Single;
    };
    class JCA_arifle_SR10_VFG_sand_F: JCA_arifle_SR10_VFG_base_F
    {
        class WeaponSlotsInfo;
        class Single;
    };
    class JCA_arifle_SR10_AFG_olive_F: JCA_arifle_SR10_AFG_base_F
    {
        class WeaponSlotsInfo;
        class Single;
    };
    class JCA_arifle_SR10_VFG_olive_F: JCA_arifle_SR10_VFG_base_F
    {
        class WeaponSlotsInfo;
        class Single;
    };
    class JCA_arifle_Mk12_AFG_black_F: JCA_arifle_SR10_AFG_black_F
    {
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=457.2; // 18" https://en.wikipedia.org/wiki/Mk_12_Special_Purpose_Rifle
        ACE_railHeightAboveBore=2.39586; // from ACE3 checkScopes.sqf
        initSpeed=-0.985; // 912, 926, 975, 825, 936, 857, 279m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), Lotto 790
        descriptionShort="Marksman rifle<br />Caliber: 5.56x45 mm";
        displayName="Mk 12 Mod 1 5.56 mm AFG (Black)";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_556 // JCA asdg_MuzzleSlot_762
            {
                iconPosition[]={-0.04,0.43}; // JCA 0.12,0.43
                iconScale=0.2;
            };
            mass=74.1; // 3.36kg https://danieldefense.com, JCA 120
        };
        class Single: Single
        {
            dispersion=0.000303; // 1.85 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00058 (1.99 MOA)
        };
    };
    class JCA_arifle_Mk12_AFG_sand_F: JCA_arifle_SR10_AFG_sand_F
    {
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=457.2; // 18" https://en.wikipedia.org/wiki/Mk_12_Special_Purpose_Rifle
        ACE_railHeightAboveBore=2.39586; // from ACE3 checkScopes.sqf
        initSpeed=-0.985; // 912, 926, 975, 825, 936, 857, 279m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), Lotto 790
        descriptionShort="Marksman rifle<br />Caliber: 5.56x45 mm";
        displayName="Mk 12 Mod 1 5.56 mm AFG (Sand)";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_556 // JCA asdg_MuzzleSlot_762
            {
                iconPosition[]={-0.04,0.43}; // JCA 0.12,0.43
                iconScale=0.2;
            };
            mass=74.1; // 3.36kg https://danieldefense.com, JCA 120
        };
        class Single: Single
        {
            dispersion=0.000303; // 1.85 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00058 (1.99 MOA)
        };
    };
    class JCA_arifle_Mk12_AFG_olive_F: JCA_arifle_SR10_AFG_olive_F
    {
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=457.2; // 18" https://en.wikipedia.org/wiki/Mk_12_Special_Purpose_Rifle
        ACE_railHeightAboveBore=2.39586; // from ACE3 checkScopes.sqf
        initSpeed=-0.985; // 912, 926, 975, 825, 936, 857, 279m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), Lotto 790
        descriptionShort="Marksman rifle<br />Caliber: 5.56x45 mm";
        displayName="Mk 12 Mod 1 5.56 mm AFG (Olive)";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_556 // JCA asdg_MuzzleSlot_762
            {
                iconPosition[]={-0.04,0.43}; // JCA 0.12,0.43
                iconScale=0.2;
            };
            mass=74.1; // 3.36kg https://danieldefense.com, JCA 120
        };
        class Single: Single
        {
            dispersion=0.000303; // 1.85 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00058 (1.99 MOA)
        };
    };
    class JCA_arifle_Mk12_VFG_black_F: JCA_arifle_SR10_VFG_black_F
    {
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=457.2; // 18" https://en.wikipedia.org/wiki/Mk_12_Special_Purpose_Rifle
        ACE_railHeightAboveBore=2.39586; // from ACE3 checkScopes.sqf
        initSpeed=-0.985; // 912, 926, 975, 825, 936, 857, 279m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), Lotto 790
        descriptionShort="Marksman rifle<br />Caliber: 5.56x45 mm";
        displayName="Mk 12 Mod 1 5.56 mm VFG (Black)";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_556 // JCA asdg_MuzzleSlot_762
            {
                iconPosition[]={-0.04,0.43}; // JCA 0.12,0.43
                iconScale=0.2;
            };
            mass=74.1; // 3.36kg https://danieldefense.com, JCA 120
        };
        class Single: Single
        {
            dispersion=0.000303; // 1.85 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00058 (1.99 MOA)
        };
    };
    class JCA_arifle_Mk12_VFG_sand_F: JCA_arifle_SR10_VFG_sand_F
    {
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=457.2; // 18" https://en.wikipedia.org/wiki/Mk_12_Special_Purpose_Rifle
        ACE_railHeightAboveBore=2.39586; // from ACE3 checkScopes.sqf
        initSpeed=-0.985; // 912, 926, 975, 825, 936, 857, 279m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), Lotto 790
        descriptionShort="Marksman rifle<br />Caliber: 5.56x45 mm";
        displayName="Mk 12 Mod 1 5.56 mm VFG (Sand)";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_556 // JCA asdg_MuzzleSlot_762
            {
                iconPosition[]={-0.04,0.43}; // JCA 0.12,0.43
                iconScale=0.2;
            };
            mass=74.1; // 3.36kg https://danieldefense.com, JCA 120
        };
        class Single: Single
        {
            dispersion=0.000303; // 1.85 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00058 (1.99 MOA)
        };
    };
    class JCA_arifle_Mk12_VFG_olive_F: JCA_arifle_SR10_VFG_olive_F
    {
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=457.2; // 18" https://en.wikipedia.org/wiki/Mk_12_Special_Purpose_Rifle
        ACE_railHeightAboveBore=2.39586; // from ACE3 checkScopes.sqf
        initSpeed=-0.985; // 912, 926, 975, 825, 936, 857, 279m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), Lotto 790
        descriptionShort="Marksman rifle<br />Caliber: 5.56x45 mm";
        displayName="Mk 12 Mod 1 5.56 mm VFG (Olive)";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class MuzzleSlot: asdg_MuzzleSlot_556 // JCA asdg_MuzzleSlot_762
            {
                iconPosition[]={-0.04,0.43}; // JCA 0.12,0.43
                iconScale=0.2;
            };
            mass=74.1; // 3.36kg https://danieldefense.com, JCA 120
        };
        class Single: Single
        {
            dispersion=0.000303; // 1.85 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, JCA 0.00058 (1.99 MOA)
        };
    };
    class lot_SCAR_base_F: Rifle_Base_F
    {
        ACE_barrelTwist=304.8; // 1:12"
        ACE_barrelLength=406.4; // 16" https://fnherstal.com/app/uploads/technical-data-fn-scar-h-mk2-2.pdf
        ACE_railHeightAboveBore=4.21531; // from ACE3 checkScopes.sqf
        initSpeed=-0.981177; // 775, 912, 325m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), Lotto 715
        descriptionShort="Assault rifle<br />Caliber: 7.62x51 mm";
        magazines[]=
        {
            "JCA_20Rnd_762x51_SMAG"
        };
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=80; // 3.63kg https://fnherstal.com/app/uploads/technical-data-fn-scar-h-mk2-2.pdf, Lotto 120
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.000384; // 2.35 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.00055 (1.89 MOA)
        };
        class FullAuto: Mode_FullAuto
        {
            dispersion=0.000384; // 2.35 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.00055 (1.89 MOA)
        };
    };
    class lot_SCAR_GL_base_F: lot_SCAR_base_F
    {
        ACE_barrelLength=330.2; // 13" https://fnherstal.com/app/uploads/technical-data-fn-scar-h-mk2-2.pdf
        initSpeed=-0.968987; // 765, 901, 321m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), Lotto 690
        descriptionShort="Assault Rifle<br />Caliber: 7.62x51 mm<br />Grenade Launcher<br />Caliber: 40 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=104.2; // 3.46kg, 1.27kg https://fnherstal.com/app/uploads/technical-data-fn-scar-h-mk2-2.pdf, https://www.heckler-koch.com/en/Products/Military%20and%20Law%20Enforcement/40%20mm%20systems/GLM?section=variants&variant=1164&s=1, Lotto 120
        };
        class Single: Single
        {
            dispersion=0.000393; // 2.4 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000393; // 2.4 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
    };
    class lot_SCAR_short_base_F: lot_SCAR_base_F
    {
        ACE_barrelLength=330.2; // 13" https://fnherstal.com/app/uploads/technical-data-fn-scar-h-mk2-2.pdf
        initSpeed=-0.968987; // 765, 901, 321m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), Lotto 690
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=76.2; // 3.46kg https://fnherstal.com/app/uploads/technical-data-fn-scar-h-mk2-2.pdf, Lotto 100
        };
        class Single: Single
        {
            dispersion=0.000393; // 2.4 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000393; // 2.4 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
    };
    class lot_SCAR_grip_base_F: lot_SCAR_base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=80; // 3.63kg https://fnherstal.com/app/uploads/technical-data-fn-scar-h-mk2-2.pdf, Lotto 125
        };
    };
    class lot_SCAR_short_grip_base_F: lot_SCAR_short_base_F
    {
        ACE_barrelLength=330.2; // 13" https://fnherstal.com/app/uploads/technical-data-fn-scar-h-mk2-2.pdf
        initSpeed=-0.968987; // 765, 901, 321m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), Lotto 690
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=76.2; // 3.46kg https://fnherstal.com/app/uploads/technical-data-fn-scar-h-mk2-2.pdf, Lotto 100
        };
        class Single: Single
        {
            dispersion=0.000393; // 2.4 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000393; // 2.4 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
    };
    class lot_SCAR_L_base_F: Rifle_Base_F
    {
        ACE_barrelTwist=177.8; // 1:7"
        ACE_barrelLength=368.3; // 14.5" https://fnherstal.com/app/uploads/technical-data-fn-scar-l-mk2-2.pdf
        ACE_railHeightAboveBore=4.21531; // from ACE3 checkScopes.sqf
        initSpeed=-0.942679; // 873, 886, 933, 790, 896, 830, 267m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), Lotto 880
        descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=79.4; // 3.6kg https://fnherstal.com/app/uploads/technical-data-fn-scar-l-mk2-2.pdf, Lotto 105
        };
        class Single: Mode_SemiAuto
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
        class FullAuto: Mode_FullAuto
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
    };
    class lot_SCAR_L_GL_base_F: lot_SCAR_L_base_F
    {
        ACE_barrelLength=254; // 10" https://fnherstal.com/app/uploads/technical-data-fn-scar-l-mk2-2.pdf
        initSpeed=-0.8467; // 784, 796, 838, 709, 804, 745, 240m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), Lotto 800
        descriptionShort="Assault Rifle<br />Caliber: 5.56x45 mm<br />Grenade Launcher<br />Caliber: 40 mm";
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=103; // 3.4kg, 1.27kg https://fnherstal.com/app/uploads/technical-data-fn-scar-l-mk2-2.pdf, https://www.heckler-koch.com/en/Products/Military%20and%20Law%20Enforcement/40%20mm%20systems/GLM?section=variants&variant=1164&s=1, Lotto 115
        };
        class Single: Single
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
    };
    class lot_SCAR_L_short_base_F: lot_SCAR_L_base_F
    {
        ACE_barrelLength=254; // 10" https://fnherstal.com/app/uploads/technical-data-fn-scar-l-mk2-2.pdf
        initSpeed=-0.8467; // 784, 796, 838, 709, 804, 745, 240m/s according to ACE_muzzleVelocities ICAO conditions (15°C, 1013.25hPa, 0%), Lotto 800
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=75; // 3.4kg https://fnherstal.com/app/uploads/technical-data-fn-scar-l-mk2-2.pdf, Lotto 95
        };
        class Single: Single
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
    };
    class lot_SCAR_L_grip_short_base_F: lot_SCAR_L_base_F
    {
        ACE_barrelLength=254; // 10" https://fnherstal.com/app/uploads/technical-data-fn-scar-l-mk2-2.pdf
        initSpeed=-0.8467; // 784, 796, 838, 709, 804, 745, 240m/s according to ACE_muzzleVelocities at ICAO conditions (15°C, 1013.25hPa, 0%), Lotto 800
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=75; // 3.4kg https://fnherstal.com/app/uploads/technical-data-fn-scar-l-mk2-2.pdf, Lotto 95
        };
        class Single: Single
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
    };
    class lot_SCAR_L_grip_base_F: lot_SCAR_L_base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass=79.4; // 3.6kg https://fnherstal.com/app/uploads/technical-data-fn-scar-l-mk2-2.pdf, Lotto 115
        };
    };
    class lot_SCAR_L_black_base_F: lot_SCAR_L_base_F
    {
    };
    class lot_SCAR_L_GL_black_base_F: lot_SCAR_L_GL_base_F
    {
    };
    class lot_SCAR_L_short_black_base_F: lot_SCAR_L_short_base_F
    {
    };
    class lot_SCAR_L_grip_short_black_base_F: lot_SCAR_L_grip_short_base_F
    {
    };
    class lot_SCAR_L_grip_black_base_F: lot_SCAR_L_grip_base_F
    {
    };
    class lot_SCAR_L_khaki_base_F: lot_SCAR_L_base_F
    {
    };
    class lot_SCAR_L_GL_khaki_base_F: lot_SCAR_L_GL_base_F
    {
    };
    class lot_SCAR_L_short_khaki_base_F: lot_SCAR_L_short_base_F
    {
    };
    class lot_SCAR_L_grip_short_khaki_base_F: lot_SCAR_L_grip_short_base_F
    {
    };
    class lot_SCAR_L_grip_khaki_base_F: lot_SCAR_L_grip_base_F
    {
    };
    class lot_SCAR_L_F: lot_SCAR_L_base_F
    {
        class Single: Single
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.00055 (1.89 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.00055 (1.89 MOA)
        };
    };
    class lot_SCAR_L_GL_F: lot_SCAR_L_GL_base_F
    {
        class Single: Single
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
    };
    class lot_SCAR_L_short_F: lot_SCAR_L_short_base_F
    {
        class Single: Single
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
    };
    class lot_SCAR_L_grip_short_F: lot_SCAR_L_grip_short_base_F
    {
        class Single: Single
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
    };
    class lot_SCAR_L_grip_F: lot_SCAR_L_grip_base_F
    {
        class Single: Single
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.00055 (1.89 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.00055 (1.89 MOA)
        };
    };
    class lot_SCAR_L_black_F: lot_SCAR_L_black_base_F
    {
        class Single: Single
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.00055 (1.89 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.00055 (1.89 MOA)
        };
    };
    class lot_SCAR_L_GL_black_F: lot_SCAR_L_GL_black_base_F
    {
        class Single: Single
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
    };
    class lot_SCAR_L_short_black_F: lot_SCAR_L_short_black_base_F
    {
        class Single: Single
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
    };
    class lot_SCAR_L_grip_short_black_F: lot_SCAR_L_grip_short_black_base_F
    {
        class Single: Single
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
    };
    class lot_SCAR_L_grip_black_F: lot_SCAR_L_grip_black_base_F
    {
        class Single: Single
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.00055 (1.89 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.00055 (1.89 MOA)
        };
    };
    class lot_SCAR_L_khaki_F: lot_SCAR_L_khaki_base_F
    {
        class Single: Single
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.00055 (1.89 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.00055 (1.89 MOA)
        };
    };
    class lot_SCAR_L_GL_khaki_F: lot_SCAR_L_GL_khaki_base_F
    {
        class Single: Single
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
    };
    class lot_SCAR_L_short_khaki_F: lot_SCAR_L_short_khaki_base_F
    {
        class Single: Single
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
    };
    class lot_SCAR_L_grip_short_khaki_F: lot_SCAR_L_grip_short_khaki_base_F
    {
        class Single: Single
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.000646; // 3.95 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.0007 (2.41 MOA)
        };
    };
    class lot_SCAR_L_grip_khaki_F: lot_SCAR_L_grip_khaki_base_F
    {
        class Single: Single
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.00055 (1.89 MOA)
        };
        class FullAuto: FullAuto
        {
            dispersion=0.00054; // 3.3 MOA (*0.562*0.000291), 0.562 value from https://github.com/acemod/ACE3/pull/5755, Lotto 0.00055 (1.89 MOA)
        };
    };
    class muzzle_snds_H: ItemCore // Sound Suppressor 6.5mm
    {
        class ItemInfo: InventoryMuzzleItem_Base_F
        {
        };
    };
    class muzzle_snds_M: muzzle_snds_H // Sound Suppressor 5.56mm
    {
        class ItemInfo: ItemInfo
        {
            // mass=8;
            class MagazineCoef
            {
                initSpeed=1; // ACE3, muzzle_snds_M 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, muzzle_snds_M 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_M 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_M 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        // inertia=0.1;
    };
    class muzzle_snds_B: muzzle_snds_H // Sound Suppressor 7.62mm
    {
        class ItemInfo: ItemInfo
        {
            // mass=12;
            class MagazineCoef
            {
                initSpeed=1; // ACE3, JCA 1.05, muzzle_snds_B 1.05
            };
            class AmmoCoef
            {
                hit=1;
                typicalSpeed=1;
                airFriction=1;
                visibleFire=0.3;
                audibleFire=0.04;
                visibleFireTime=0.5;
                audibleFireTime=0.5;
                cost=1;
            };
            class MuzzleCoef
            {
                dispersionCoef=1; // ACE3 0.95, JCA 0.8, muzzle_snds_B 0.8
                artilleryDispersionCoef=1;
                fireLightCoef=0.1;
                recoilCoef=0.95; // ACE3, muzzle_snds_M 1
                recoilProneCoef=0.95; // ACE3, muzzle_snds_M 1
                minRangeCoef=1;
                minRangeProbabCoef=1;
                midRangeCoef=1;
                midRangeProbabCoef=1;
                maxRangeCoef=1;
                maxRangeProbabCoef=1;
            };
        };
        // inertia=0.2;
    };
};
