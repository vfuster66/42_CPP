// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

// directive qui assure que le fichier d'en-tete ne sera inclus qu'une seule
// fois par unite de compilation
#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

// Declaration de classe
class Account {

// Membres publics
public:

	// Alias
	typedef Account		t;

/***********************************************************************
*							METHODES STATIQUES  					   *
************************************************************************/

// Methodes liees a la classe elle-meme
// Permettent d'acceder a des informations globales et de les afficher

	static int	getNbAccounts( void );
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	static void	displayAccountsInfos( void );

/***********************************************************************
*							CONSTRUCTEUR  							   *
************************************************************************/

	Account( int initial_deposit );

/***********************************************************************
*							DESTRUCTEUR  							   *
************************************************************************/

	~Account( void );

/***********************************************************************
*							METHODES D'INSTANCE  					   *
************************************************************************/

// Methodes pour gerer les operations bancaires

	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;

// Membres prives
private:

// Variables statiques pour stocker des informations globales
// sur l'ensemble des comptes
	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

/***********************************************************************
*							METHODES D'HORODATAGE  					   *
************************************************************************/

	static void	_displayTimestamp( void );


// Variables membres pour stocker des informations specifiques
// a chaque compte
	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

/***********************************************************************
*							CONSTRUCTEUR PRIVE 							   *
************************************************************************/

// Permet d'empecher la creation d' un Account sans specifier de depot 
// initial
	Account( void );

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
