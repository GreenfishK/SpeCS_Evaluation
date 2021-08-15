; ------------ Sort and Predicate -------------------
(declare-sort RDFValue 0)
(declare-fun P (RDFValue RDFValue RDFValue RDFValue) Bool)
(declare-fun f_str (RDFValue) RDFValue)
(declare-fun f_xsd_string (RDFValue) RDFValue)
(declare-fun f_datatype (RDFValue) RDFValue)
(declare-fun f_lcase (RDFValue) RDFValue)
(declare-fun f_round (RDFValue) RDFValue)
(declare-fun f_abs (RDFValue) RDFValue)
(declare-fun f_isliteral (RDFValue) Bool)
(declare-fun f_isuri (RDFValue) Bool)
(declare-fun f_contains (RDFValue RDFValue) Bool)
(declare-fun f_regex (RDFValue RDFValue) Bool)
(declare-fun f_add (RDFValue RDFValue) RDFValue)
(declare-fun f_sub (RDFValue RDFValue) RDFValue)
(declare-fun f_mul (RDFValue RDFValue) RDFValue)
(declare-fun f_div (RDFValue RDFValue) RDFValue)
(declare-fun f_lt (RDFValue RDFValue) Bool)
(declare-fun f_gt (RDFValue RDFValue) Bool)
(declare-fun f_leq (RDFValue RDFValue) Bool)
(declare-fun f_geq (RDFValue RDFValue) Bool)
(declare-fun f_bound (RDFValue) Bool)
(declare-const <default_graph> RDFValue)
(assert (forall ((s RDFValue)(p RDFValue)(o RDFValue)(g RDFValue)) (=> (P s p o g) (P s p o <default_graph>))))

; ------------ IRIs ---------------------------------
(declare-const	<p1_hasValue>	RDFValue)
(declare-const	<p1_memberOfPoliticalParty>	RDFValue)
(declare-const	<p1_preferredLabel>	RDFValue)
(declare-const	<p2_containsMention>	RDFValue)
(declare-const	<p2_hasInstance>	RDFValue)

; ------------ Literals -----------------------------
(declare-const	<l_0>	RDFValue)
(declare-const	<l_1>	RDFValue)

; ------------ Variables ----------------------------
(declare-const	<v2_dummy1>	RDFValue)
(declare-const	<v2_mention>	RDFValue)
(declare-const	<v2_party_label>	RDFValue)
(declare-const	<v2_person>	RDFValue)
(declare-const	<v2_personLabel>	RDFValue)
(declare-const	<v2_preflab>	RDFValue)
(declare-const	<v2_value>	RDFValue)
(declare-const	<v2_x>	RDFValue)

; ------------ Assumption ---------------------------
(assert 
	(and 
		(or (P <v2_value> <p1_preferredLabel> <v2_preflab> <default_graph>) )
		(or (P <v2_person> <p1_memberOfPoliticalParty> <v2_dummy1> <default_graph>) )
		(or (P <v2_dummy1> <p1_hasValue> <v2_value> <default_graph>) )
		(or (P <v2_x> <p2_containsMention> <v2_mention> <default_graph>) )
		(or (P <v2_person> <p1_preferredLabel> <v2_personLabel> <default_graph>) )
		(or (P <v2_mention> <p2_hasInstance> <v2_person> <default_graph>) )
		(= <v2_preflab> <l_0>)
		(= <v2_personLabel> <l_1>)
		(= <v2_party_label> <v2_value>)
	)
)

; ------------ Conjecture ---------------------------
(assert (not (exists ((<v1_document> RDFValue)(<v1_dummy1> RDFValue)(<v1_mention> RDFValue)(<v1_person> RDFValue)(<v1_personLabel> RDFValue)(<v1_preflab> RDFValue)(<v1_value> RDFValue)) 
	(and 
		(or (P <v1_document> <p2_containsMention> <v1_mention> <default_graph>) )
		(or (P <v1_person> <p1_memberOfPoliticalParty> <v1_dummy1> <default_graph>) )
		(or (P <v1_dummy1> <p1_hasValue> <v1_value> <default_graph>) )
		(or (P <v1_person> <p1_preferredLabel> <v1_personLabel> <default_graph>) )
		(or (P <v1_mention> <p2_hasInstance> <v1_person> <default_graph>) )
		(or (P <v1_value> <p1_preferredLabel> <v1_preflab> <default_graph>) )
		(= <v1_preflab> <l_0>)
		(= <v1_personLabel> <l_1>)
		(or (and (= <v2_mention> <v1_document>) (= <v2_party_label> <v1_mention>) (= <v2_personLabel> <v1_personLabel>) (= <v2_x> <v1_value>) )(and (= <v2_mention> <v1_document>) (= <v2_party_label> <v1_mention>) (= <v2_personLabel> <v1_value>) (= <v2_x> <v1_personLabel>) )(and (= <v2_mention> <v1_document>) (= <v2_party_label> <v1_personLabel>) (= <v2_personLabel> <v1_mention>) (= <v2_x> <v1_value>) )(and (= <v2_mention> <v1_document>) (= <v2_party_label> <v1_personLabel>) (= <v2_personLabel> <v1_value>) (= <v2_x> <v1_mention>) )(and (= <v2_mention> <v1_document>) (= <v2_party_label> <v1_value>) (= <v2_personLabel> <v1_personLabel>) (= <v2_x> <v1_mention>) )(and (= <v2_mention> <v1_document>) (= <v2_party_label> <v1_value>) (= <v2_personLabel> <v1_mention>) (= <v2_x> <v1_personLabel>) )(and (= <v2_mention> <v1_mention>) (= <v2_party_label> <v1_document>) (= <v2_personLabel> <v1_personLabel>) (= <v2_x> <v1_value>) )(and (= <v2_mention> <v1_mention>) (= <v2_party_label> <v1_document>) (= <v2_personLabel> <v1_value>) (= <v2_x> <v1_personLabel>) )(and (= <v2_mention> <v1_mention>) (= <v2_party_label> <v1_personLabel>) (= <v2_personLabel> <v1_document>) (= <v2_x> <v1_value>) )(and (= <v2_mention> <v1_mention>) (= <v2_party_label> <v1_personLabel>) (= <v2_personLabel> <v1_value>) (= <v2_x> <v1_document>) )(and (= <v2_mention> <v1_mention>) (= <v2_party_label> <v1_value>) (= <v2_personLabel> <v1_personLabel>) (= <v2_x> <v1_document>) )(and (= <v2_mention> <v1_mention>) (= <v2_party_label> <v1_value>) (= <v2_personLabel> <v1_document>) (= <v2_x> <v1_personLabel>) )(and (= <v2_mention> <v1_personLabel>) (= <v2_party_label> <v1_mention>) (= <v2_personLabel> <v1_document>) (= <v2_x> <v1_value>) )(and (= <v2_mention> <v1_personLabel>) (= <v2_party_label> <v1_mention>) (= <v2_personLabel> <v1_value>) (= <v2_x> <v1_document>) )(and (= <v2_mention> <v1_personLabel>) (= <v2_party_label> <v1_document>) (= <v2_personLabel> <v1_mention>) (= <v2_x> <v1_value>) )(and (= <v2_mention> <v1_personLabel>) (= <v2_party_label> <v1_document>) (= <v2_personLabel> <v1_value>) (= <v2_x> <v1_mention>) )(and (= <v2_mention> <v1_personLabel>) (= <v2_party_label> <v1_value>) (= <v2_personLabel> <v1_document>) (= <v2_x> <v1_mention>) )(and (= <v2_mention> <v1_personLabel>) (= <v2_party_label> <v1_value>) (= <v2_personLabel> <v1_mention>) (= <v2_x> <v1_document>) )(and (= <v2_mention> <v1_value>) (= <v2_party_label> <v1_mention>) (= <v2_personLabel> <v1_personLabel>) (= <v2_x> <v1_document>) )(and (= <v2_mention> <v1_value>) (= <v2_party_label> <v1_mention>) (= <v2_personLabel> <v1_document>) (= <v2_x> <v1_personLabel>) )(and (= <v2_mention> <v1_value>) (= <v2_party_label> <v1_personLabel>) (= <v2_personLabel> <v1_mention>) (= <v2_x> <v1_document>) )(and (= <v2_mention> <v1_value>) (= <v2_party_label> <v1_personLabel>) (= <v2_personLabel> <v1_document>) (= <v2_x> <v1_mention>) )(and (= <v2_mention> <v1_value>) (= <v2_party_label> <v1_document>) (= <v2_personLabel> <v1_personLabel>) (= <v2_x> <v1_mention>) )(and (= <v2_mention> <v1_value>) (= <v2_party_label> <v1_document>) (= <v2_personLabel> <v1_mention>) (= <v2_x> <v1_personLabel>) ))
	)
)))

; ------------ Check-Sat ----------------------------
(check-sat)
