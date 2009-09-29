/********************************************************************
 * controlsWidget.cpp
 ********************************************************************
 * This file is part of Bungeni Transcribe
 *
 * Copyright (C) 2009 - UNDESA <www.parliaments.info>
 *
 *
 * Author - Miano Njoka <miano@parliaments.info>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, 
 * Boston, MA  02110-1301  USA
 ***********************************************************************/
 
#include "controlsWidget.hpp" 

#define setupSmallButton( aButton ){  \
    aButton->setMaximumSize( QSize( 26, 26 ) ); \
    aButton->setMinimumSize( QSize( 26, 26 ) ); \
    aButton->setIconSize( QSize( 20, 20 ) ); \
    aButton->setFocusPolicy( Qt::NoFocus ); \
}

ControlsWidget::ControlsWidget()
{

    ui.setupUi(this);
    
    setSizePolicy( QSizePolicy::Preferred , QSizePolicy::Maximum );


    /** Slower and faster Buttons **/
    
    ui.slower->setAutoRaise( true );
    ui.slower->setMaximumSize( QSize( 26, 20 ) );
    ui.slower->setFocusPolicy( Qt::NoFocus );
    ui.slower->setIcon(QIcon(":/pixmaps/slower.png"));
   // BUTTON_SET_ACT_I( slowerButton, "", slower, qtr( "Slower" ), slower() );

    ui.faster->setAutoRaise( true );
    ui.faster->setMaximumSize( QSize( 26, 20 ) );
    ui.faster->setFocusPolicy( Qt::NoFocus );
    ui.faster->setIcon(QIcon(":/pixmaps/faster.png"));
   // BUTTON_SET_ACT_I( fasterButton, "", faster, qtr( "Faster" ), faster() );

  


    /** Play Buttons **/
    QSizePolicy sizePolicy( QSizePolicy::Fixed, QSizePolicy::Fixed );
    sizePolicy.setHorizontalStretch( 0 );
    sizePolicy.setVerticalStretch( 0 );
    
    /* Play */
   
    ui.play->setSizePolicy( sizePolicy );
    ui.play->setMaximumSize( QSize( 32, 32 ) );
    ui.play->setMinimumSize( QSize( 32, 32 ) );
    ui.play->setIconSize( QSize( 26, 26 ) );
    ui.play->setFocusPolicy( Qt::NoFocus );
    ui.play->setIcon(QIcon(":/pixmaps/play.png"));

    /* Prev */
    
    ui.prev->setSizePolicy( sizePolicy );
    setupSmallButton( ui.prev );
    ui.prev->setIcon(QIcon(":/pixmaps/previous.png"));

    /* Stop */
    
    ui.stop->setSizePolicy( sizePolicy );
    setupSmallButton( ui.stop );
    ui.stop->setIcon(QIcon(":/pixmaps/stop.png"));
    
    /* next */
    ui.next->setSizePolicy( sizePolicy );
    setupSmallButton( ui.next );
    ui.next->setIcon(QIcon(":/pixmaps/next.png"));
}

ControlsWidget::~ControlsWidget()
{}



void ControlsWidget::stop()
{
}

void ControlsWidget::play()
{
}

void ControlsWidget::prev()
{
}

void ControlsWidget::next()
{
}


