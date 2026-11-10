#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;

class $modify(CorrectionPlayerObject, PlayerObject) {
    void pushButton(PlayerButton button) {
        bool isEnabled = Mod::get()->getSettingValue<bool>("enabled");
        if (isEnabled) {
            log::info("Click detectado y analizado por el mod.");
        }
        PlayerObject::pushButton(button);
    }
};
