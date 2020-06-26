/****************************************************************************
 * Copyright (C) 2015 Dimok
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ****************************************************************************/
#pragma once

#include <map>
#include <gui/GuiParticleImage.h>
#include <gui/GuiFrame.h>

class MainContent : public GuiFrame, public sigslot::has_slots<> {
public:
    MainContent(int32_t w, int32_t h, int32_t GameIndex);

    virtual ~MainContent();

    void update(GuiController *t);

    void draw(CVideo *pVideo);

    void process();

private:
    GuiParticleImage particleBgImage;
};
