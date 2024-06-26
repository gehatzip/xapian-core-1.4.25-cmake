/** @file chert_modifiedpostlist.h
 * @brief A ChertPostList plus pending modifications
 */
/* Copyright (C) 2006,2007,2008,2009,2011,2015 Olly Betts
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
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

#ifndef XAPIAN_INCLUDED_CHERT_MODIFIEDPOSTLIST_H
#define XAPIAN_INCLUDED_CHERT_MODIFIEDPOSTLIST_H

#include <map>
#include <string>

using namespace std;

#include "chert_database.h"
#include "chert_postlist.h"

class ChertModifiedPostList : public ChertPostList {
    /// Modifications to apply to the ChertPostList.
    //@{
    map<Xapian::docid, pair<char, Xapian::termcount> > mods;
    map<Xapian::docid, pair<char, Xapian::termcount> >::const_iterator it;
    //@}

    /// Pointer to PositionList returned from read_position_list to be deleted.
    PositionList * poslist;

    /// Skip over deleted documents after a next() or skip_to().
    void skip_deletes(double w_min);

  public:
    /// Constructor.
    ChertModifiedPostList(Xapian::Internal::intrusive_ptr<const ChertDatabase> this_db_,
			  const string & term_,
			  const map<Xapian::docid, pair<char, Xapian::termcount> > & mods_,
			  Xapian::termcount wdf_upper_bound_)
	: ChertPostList(this_db_, term_, true),
	  mods(mods_), it(mods.begin()), poslist(0)
    {
	ChertPostList::wdf_upper_bound = wdf_upper_bound_;
    }

    ~ChertModifiedPostList();

    Xapian::doccount get_termfreq() const;

    Xapian::docid get_docid() const;

    Xapian::termcount get_doclength() const;

    Xapian::termcount get_unique_terms() const;

    Xapian::termcount get_wdf() const;

    PositionList *read_position_list();

    PositionList *open_position_list() const;

    PostList * next(double w_min);

    PostList * skip_to(Xapian::docid desired_did, double w_min);

    bool at_end() const;

    std::string get_description() const;
};

#endif // XAPIAN_INCLUDED_CHERT_MODIFIEDPOSTLIST_H
