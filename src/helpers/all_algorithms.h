

                template <typename G>
                std::vector<std::vector<int>> call_algorithm(G pattern, G match,std::string alg_name,std::string constraint,std::vector<std::vector<int>> isomorphisms){

                        int count = 0;
                        auto index_order_g = check_vertex_order(constraint,pattern);

                        if(alg_name == "backjumping_bitset_degreeprune_ind"){

                                backjumping_bitset_degreeprune_ind(
                                pattern,
                                match,
                                [&count,&isomorphisms](auto const & S) {
                                        ++count;
                                        std::vector<int> iso;
                                        for (int i=0; i<S.map.size(); ++i) {
                                                iso.push_back(S.map[i]+1);
                                        }
                                        isomorphisms.push_back(iso);
                                        return true;
                                },
                                index_order_g);
                        }else if(alg_name == "backjumping_bitset_degreesequenceprune_ind"){
                        //backjumping_bitset_degreesequenceprune_ind
                                backjumping_bitset_degreesequenceprune_ind(
                                pattern,
                                match,
                                [&count,&isomorphisms](auto const & S) {
                                        ++count;
                                        std::vector<int> iso;
                                        for (int i=0; i<S.map.size(); ++i) {
                                                iso.push_back(S.map[i]+1);
                                                std::cout << S.map[i] + 1;
                                        }
                                        isomorphisms.push_back(iso);
                                        std::cout << "\n";

                                        return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backjumping_degreeprune_ind"){
                        //backjumping_degreeprune_ind
                                backjumping_degreeprune_ind(
                                pattern,
                                match,
                                [&count,&isomorphisms](auto const & S) {
                                        ++count;
                                        std::vector<int> iso;
                                        for (int i=0; i<S.map.size(); ++i) {
                                                iso.push_back(S.map[i]+1);
                                        }
                                        isomorphisms.push_back(iso);

                                        return true;
                                },
                                index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backjumping_degreesequenceprune_ind"){
                                //backjumping_degreesequenceprune_ind
                                backjumping_degreesequenceprune_ind(
                                pattern,
                                match,
                                [&count,&isomorphisms](auto const & S) {
                                        ++count;
                                        std::vector<int> iso;
                                        for (int i=0; i<S.map.size(); ++i) {
                                                iso.push_back(S.map[i]+1);
                                        }
                                        isomorphisms.push_back(iso);

                                        return true;
                                },
                                index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backjumping_ind_algorithm"){

                                //backjumping_ind
                                backjumping_ind(
                                pattern,
                                match,
                                [&count,&isomorphisms](auto const & S) {
                                        ++count;
                                        std::vector<int> iso;
                                        for (int i=0; i<S.map.size(); ++i) {
                                                iso.push_back(S.map[i]+1);
                                        }
                                        isomorphisms.push_back(iso);

                                        return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backmarking_degreeprune_ind"){

                                //backmarking_degreeprune_ind
                                backmarking_degreeprune_ind(
                                pattern,
                                match,
                                [&count,&isomorphisms](auto const & S) {
                                        ++count;
                                        std::vector<int> iso;
                                        for (int i=0; i<S.map.size(); ++i) {
                                                iso.push_back(S.map[i]+1);
                                        }
                                        isomorphisms.push_back(iso);

                                        return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name=="backmarking_ind"){

                                //backmarking_ind
                                backmarking_ind(
                                pattern,
                                match,
                                [&count,&isomorphisms](auto const & S) {
                                        ++count;
                                        std::vector<int> iso;
                                        for (int i=0; i<S.map.size(); ++i) {
                                                iso.push_back(S.map[i]+1);
                                        }
                                        isomorphisms.push_back(iso);

                                        return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backtracking_adjacentconsistency_forwardcount_ind"){

                                //backtracking_adjacentconsistency_forwardcount_ind
                                backtracking_adjacentconsistency_forwardcount_ind(
                                pattern,
                                match,
                                [&count,&isomorphisms](auto const & S) {
                                        ++count;
                                        std::vector<int> iso;
                                        for (int i=0; i<S.map.size(); ++i) {
                                                iso.push_back(S.map[i]+1);
                                        }
                                        isomorphisms.push_back(iso);
                                        return true;
                                        },
                                        index_order_g);

                                return isomorphisms;
                        }else if(alg_name == "backtracking_adjacentconsistency_ind"){
                                //backtracking_adjacentconsistency_ind
                                backtracking_adjacentconsistency_ind(
                                pattern,
                                match,
                                [&count,&isomorphisms](auto const & S) {
                                        ++count;
                                        std::vector<int> iso;
                                        for (int i=0; i<S.map.size(); ++i) {
                                                iso.push_back(S.map[i]+1);
                                        }
                                        isomorphisms.push_back(iso);
                                        return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backtracking_adjacentconsistency_precount_ind"){
                                //backtracking_adjacentconsistency_precount_ind
                                backtracking_adjacentconsistency_precount_ind(
                                pattern,
                                match,
                                [&count,&isomorphisms](auto const & S) {
                                        ++count;
                                        std::vector<int> iso;
                                        for (int i=0; i<S.map.size(); ++i) {
                                                iso.push_back(S.map[i]+1);
                                        }
                                        isomorphisms.push_back(iso);

                                        return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backtracking_bitset_degreeprune_ind"){
                                //backtracking_bitset_degreeprune_ind
                                backtracking_bitset_degreeprune_ind(
                                pattern,
                                match,
                                [&count,&isomorphisms](auto const & S) {
                                        ++count;
                                        std::vector<int> iso;
                                        for (int i=0; i<S.map.size(); ++i) {
                                                iso.push_back(S.map[i]+1);
                                        }
                                        isomorphisms.push_back(iso);

                                        return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backtracking_bitset_degreesequenceprune_ind"){
                                //backtracking_bitset_degreesequenceprune_ind
                                        backtracking_bitset_degreesequenceprune_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);

                                                }
                                                isomorphisms.push_back(iso);

                                                return true;
                                                },
                                                index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backtracking_degreeprune_adjacentconsistency_forwardcount_ind"){
                                //backtracking_degreeprune_adjacentconsistency_forwardcount_ind
                                backtracking_degreeprune_adjacentconsistency_forwardcount_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);

                                                }
                                                isomorphisms.push_back(iso);

                                                return true;
                                                },
                                                index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backtracking_degreeprune_adjacentconsistency_ind"){
                                //backtracking_degreeprune_adjacentconsistency_ind
                                backtracking_degreeprune_adjacentconsistency_ind(
                                pattern,
                                match,
                                [&count,&isomorphisms](auto const & S) {
                                        ++count;
                                        std::vector<int> iso;
                                        for (int i=0; i<S.map.size(); ++i) {
                                                iso.push_back(S.map[i]+1);

                                        }
                                        isomorphisms.push_back(iso);

                                        return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backtracking_degreeprune_adjacentconsistency_precount_ind"){
                                //backtracking_degreeprune_adjacentconsistency_precount_ind

                                backtracking_degreeprune_adjacentconsistency_precount_ind(
                                pattern,
                                match,
                                [&count,&isomorphisms](auto const & S) {
                                        ++count;
                                        std::vector<int> iso;
                                        for (int i=0; i<S.map.size(); ++i) {
                                                iso.push_back(S.map[i]+1);

                                        }
                                        isomorphisms.push_back(iso);

                                        return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backtracking_degreeprune_ind"){
                                //backtracking_degreeprune_ind

                                backtracking_degreeprune_ind(
                                pattern,
                                match,
                                [&count,&isomorphisms](auto const & S) {
                                        ++count;
                                        std::vector<int> iso;
                                        for (int i=0; i<S.map.size(); ++i) {
                                                 iso.push_back(S.map[i]+1);
                                        }
                                        isomorphisms.push_back(iso);

                                        return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name ==  "backtracking_degreesequenceprune_ind"){
                                        //backtracking_degreesequenceprune_ind


                                        backtracking_degreesequenceprune_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                        ++count;
                                        std::vector<int> iso;
                                        for (int i=0; i<S.map.size(); ++i) {
                                                iso.push_back(S.map[i]+1);
                                        }
                                        isomorphisms.push_back(iso);

                                        return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backtracking_forwardcount_ind"){
                                        //backtracking_forwardcount_ind


                                        backtracking_forwardcount_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);
                                                }
                                                isomorphisms.push_back(iso);

                                                return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backtracking_ind"){


                                backtracking_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);
                                                }
                                                isomorphisms.push_back(iso);

                                                return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backtracking_parent_adjacentconsistency_forwardcount_ind"){


                                        backtracking_parent_adjacentconsistency_forwardcount_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);
                                                }
                                                isomorphisms.push_back(iso);

                                                return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backtracking_parent_adjacentconsistency_ind"){


                                        backtracking_parent_adjacentconsistency_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);
                                                }
                                                isomorphisms.push_back(iso);

                                                return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backtracking_parent_adjacentconsistency_precount_ind"){


                                backtracking_parent_adjacentconsistency_precount_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);
                                                }
                                                isomorphisms.push_back(iso);

                                                return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backtracking_parent_degreeprune_adjacentconsistency_forwardcount_ind"){


                                        backtracking_parent_degreeprune_adjacentconsistency_forwardcount_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);
                                                }
                                                isomorphisms.push_back(iso);

                                                return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backtracking_parent_degreeprune_adjacentconsistency_ind"){


                                        backtracking_parent_degreeprune_adjacentconsistency_ind(
                                                pattern,
                                                match,
                                                [&count,&isomorphisms](auto const & S) {
                                                        ++count;
                                                        std::vector<int> iso;
                                                        for (int i=0; i<S.map.size(); ++i) {
                                                                iso.push_back(S.map[i]+1);
                                                        }
                                                        isomorphisms.push_back(iso);

                                                        return true;
                                                },
                                                index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backtracking_parent_degreeprune_adjacentconsistency_precount_ind"){


                                        backtracking_parent_degreeprune_adjacentconsistency_precount_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);
                                                }
                                                isomorphisms.push_back(iso);

                                                return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backtracking_parent_degreeprune_ind"){


                                backtracking_parent_degreeprune_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);
                                                }
                                                isomorphisms.push_back(iso);
                                                return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backtracking_parent_forwardcount_ind"){


                                        backtracking_parent_forwardcount_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);
                                                }
                                                isomorphisms.push_back(iso);

                                                return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "backtracking_parent_ind"){


                                        backtracking_parent_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);
                                                }
                                                isomorphisms.push_back(iso);

                                                return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "conflictbackjumping_degreeprune_ind"){


                                        conflictbackjumping_degreeprune_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);
                                                }
                                                isomorphisms.push_back(iso);

                                                return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "conflictbackjumping_degreesequenceprune_ind"){



                                        conflictbackjumping_degreesequenceprune_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);
                                                }
                                                isomorphisms.push_back(iso);

                                                return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "conflictbackjumping_ind"){


                                        conflictbackjumping_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);
                                                }
                                                isomorphisms.push_back(iso);
                                                return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "forwardchecking_bitset_degreeprune_ac1"){


                                        forwardchecking_bitset_degreeprune_ac1_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);
                                                }
                                                isomorphisms.push_back(iso);

                                                return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "forwardchecking_bitset_degreeprune_countingalldifferent_ind"){


                                        forwardchecking_bitset_degreeprune_countingalldifferent_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);
                                                }
                                                isomorphisms.push_back(iso);
                                                return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "forwardchecking_bitset_degreeprune_ind"){


                                        forwardchecking_bitset_degreeprune_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);

                                                }
                                                isomorphisms.push_back(iso);


                                                return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "forwardchecking_bitset_degreesequenceprune_ac1_ind"){



                                        forwardchecking_bitset_degreesequenceprune_ac1_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);
                                                }
                                                isomorphisms.push_back(iso);


                                                return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "forwardchecking_bitset_degreesequenceprune_countingalldifferent_ind"){



                                        forwardchecking_bitset_degreesequenceprune_countingalldifferent_ind(
                                                pattern,
                                                match,
                                                [&count,&isomorphisms](auto const & S) {
                                                        ++count;
                                                        std::vector<int> iso;
                                                        for (int i=0; i<S.map.size(); ++i) {
                                                                iso.push_back(S.map[i]+1);
                                                        }
                                                        isomorphisms.push_back(iso);

                                                        return true;
                                                },
                                                index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "forwardchecking_bitset_degreesequenceprune_ind"){



                                        forwardchecking_bitset_degreesequenceprune_ind(
                                                        pattern,
                                                        match,
                                                        [&count,&isomorphisms](auto const & S) {
                                                                ++count;
                                                                std::vector<int> iso;
                                                                for (int i=0; i<S.map.size(); ++i) {
                                                                        iso.push_back(S.map[i]+1);
                                                                }
                                                                isomorphisms.push_back(iso);
                                                                return true;
                                                        },
                                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "forwardchecking_bitset_mrv_degreeprune_ac1_ind"){


                                        forwardchecking_bitset_mrv_degreeprune_ac1_ind(
                                                                pattern,
                                                                match,
                                                                [&count,&isomorphisms](auto const & S) {
                                                                        ++count;
                                                                        std::vector<int> iso;
                                                                        for (int i=0; i<S.map.size(); ++i) {
                                                                                iso.push_back(S.map[i]+1);
                                                                        }
                                                                        isomorphisms.push_back(iso);

                                                                        return true;
                                                                });

                                return isomorphisms;
                        }else if(alg_name == "forwardchecking_bitset_mrv_degreeprune_countingalldifferent_ind"){


                                                forwardchecking_bitset_mrv_degreeprune_countingalldifferent_ind(
                                                pattern,
                                                match,
                                                [&count,&isomorphisms](auto const & S) {
                                                        ++count;
                                                        std::vector<int> iso;
                                                        for (int i=0; i<S.map.size(); ++i) {
                                                                iso.push_back(S.map[i]+1);
                                                        }
                                                        isomorphisms.push_back(iso);

                                                        return true;
                                                });
                                return isomorphisms;
                        }else if(alg_name == "forwardchecking_bitset_mrv_degreeprune_ind"){


                                                forwardchecking_bitset_mrv_degreeprune_ind(
                                                        pattern,
                                                        match,
                                                        [&count,&isomorphisms](auto const & S) {
                                                                ++count;
                                                                std::vector<int> iso;
                                                                for (int i=0; i<S.map.size(); ++i) {
                                                                        iso.push_back(S.map[i]+1);
                                                                }
                                                                isomorphisms.push_back(iso);

                                                                return true;
                                                        });
                                return isomorphisms;
                        }else if(alg_name == "forwardchecking_bitset_mrv_degreesequenceprune_ac1_ind"){


                                        forwardchecking_bitset_mrv_degreesequenceprune_ac1_ind(
                                                pattern,
                                                match,
                                                [&count,&isomorphisms](auto const & S) {
                                                        ++count;
                                                        std::vector<int> iso;
                                                        for (int i=0; i<S.map.size(); ++i) {
                                                                iso.push_back(S.map[i]+1);
                                                        }
                                                        isomorphisms.push_back(iso);

                                                        return true;
                                                });
                                return isomorphisms;

                        }else if(alg_name == "forwardchecking_bitset_mrv_degreesequenceprune_countingalldifferent_ind"){


                                                forwardchecking_bitset_mrv_degreesequenceprune_countingalldifferent_ind(
                                                                pattern,
                                                                match,
                                                                [&count,&isomorphisms](auto const & S) {
                                                                        ++count;
                                                                        std::vector<int> iso;
                                                                        for (int i=0; i<S.map.size(); ++i) {
                                                                                iso.push_back(S.map[i]+1);
                                                                        }
                                                                        isomorphisms.push_back(iso);

                                                                        return true;
                                                                });
                                return isomorphisms;
                        }else if(alg_name == "forwardchecking_bitset_mrv_degreesequenceprune_ind"){


                                                forwardchecking_bitset_mrv_degreesequenceprune_ind(
                                                                pattern,
                                                                match,
                                                                [&count,&isomorphisms](auto const & S) {
                                                                        ++count;
                                                                        std::vector<int> iso;
                                                                        for (int i=0; i<S.map.size(); ++i) {
                                                                                iso.push_back(S.map[i]+1);
                                                                        }
                                                                        isomorphisms.push_back(iso);

                                                                        return true;
                                                                });

                                return isomorphisms;
                        }else if(alg_name == "forwardchecking_degreeprune_ind"){


                                                forwardchecking_degreeprune_ind(
                                                pattern,
                                                match,
                                                [&count,&isomorphisms](auto const & S) {
                                                        ++count;
                                                        std::vector<int> iso;
                                                        for (int i=0; i<S.map.size(); ++i) {
                                                                iso.push_back(S.map[i]+1);
                                                        }
                                                        isomorphisms.push_back(iso);

                                                        return true;
                                                },
                                                index_order_g);
                                return isomorphisms;

                        }else if (alg_name == "forwardchecking_degreesequenceprune_ind"){


                                                       forwardchecking_degreesequenceprune_ind(
                                                                pattern,
                                                                match,
                                                                [&count,&isomorphisms](auto const & S) {
                                                                        ++count;
                                                                        std::vector<int> iso;
                                                                        for (int i=0; i<S.map.size(); ++i) {
                                                                                iso.push_back(S.map[i]+1);
                                                                        }
                                                                        isomorphisms.push_back(iso);

                                                                        return true;
                                                                },
                                                                index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "forwardchecking_ind"){


                                                        forwardchecking_ind(
                                                                pattern,
                                                                match,
                                                                [&count,&isomorphisms](auto const & S) {
                                                                        ++count;
                                                                        std::vector<int> iso;
                                                                        for (int i=0; i<S.map.size(); ++i) {
                                                                                iso.push_back(S.map[i]+1);
                                                                        }
                                                                        isomorphisms.push_back(iso);

                                                                        return true;
                                                                },
                                                                index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "forwardchecking_mrv_degreeprune_ind"){

                                                        forwardchecking_mrv_degreeprune_ind(
                                                                pattern,
                                                                match,
                                                                [&count,&isomorphisms](auto const & S) {
                                                                        ++count;
                                                                        std::vector<int> iso;
                                                                        for (int i=0; i<S.map.size(); ++i) {
                                                                                iso.push_back(S.map[i]+1);
                                                                        }
                                                                        isomorphisms.push_back(iso);

                                                                        return true;
                                                                });
                                return isomorphisms;
                        }else if(alg_name == "lazyforwardchecking_degreeprune_ind"){


                                                lazyforwardchecking_degreeprune_ind(
                                                                        pattern,
                                                                        match,
                                                                        [&count,&isomorphisms](auto const & S) {
                                                                                ++count;
                                                                                std::vector<int> iso;
                                                                                for (int i=0; i<S.map.size(); ++i) {
                                                                                        iso.push_back(S.map[i]+1);
                                                                                }
                                                                                isomorphisms.push_back(iso);

                                                                                return true;
                                                                        },
                                                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "lazyforwardchecking_degreesequenceprune_ind"){

                                        lazyforwardchecking_degreesequenceprune_ind(
                                                pattern,
                                                match,
                                                [&count,&isomorphisms](auto const & S) {
                                                        ++count;
                                                        std::vector<int> iso;
                                                        for (int i=0; i<S.map.size(); ++i) {
                                                                iso.push_back(S.map[i]+1);

                                                        }
                                                        isomorphisms.push_back(iso);

                                                        return true;
                                                },
                                                index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "lazyforwardchecking_ind"){

                                        lazyforwardchecking_ind(
                                                                pattern,
                                                                match,
                                                                [&count,&isomorphisms](auto const & S) {
                                                                        ++count;
                                                                        std::vector<int> iso;
                                                                        for (int i=0; i<S.map.size(); ++i) {
                                                                                iso.push_back(S.map[i]+1);

                                                                        }
                                                                        isomorphisms.push_back(iso);

                                                                        return true;
                                                                },
                                                                index_order_g);
                                return isomorphisms;

                        }else if(alg_name == "lazyforwardchecking_low_bitset_degreeprune_ind"){

                                        lazyforwardchecking_low_bitset_degreeprune_ind(
                                        pattern,
                                        match,
                                        [&count,&isomorphisms](auto const & S) {
                                                ++count;
                                                std::vector<int> iso;
                                                for (int i=0; i<S.map.size(); ++i) {
                                                        iso.push_back(S.map[i]+1);
                                                }
                                                isomorphisms.push_back(iso);

                                                return true;
                                        },
                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "lazyforwardchecking_low_bitset_degreesequenceprune_ind"){

                                        lazyforwardchecking_low_bitset_degreesequenceprune_ind(
                                                                pattern,
                                                                match,
                                                                [&count,&isomorphisms](auto const & S) {
                                                                        ++count;
                                                                        std::vector<int> iso;
                                                                        for (int i=0; i<S.map.size(); ++i) {
                                                                                iso.push_back(S.map[i]+1);
                                                                        }
                                                                        isomorphisms.push_back(iso);
                                                                        return true;
                                                                },
                                                                index_order_g);

                                return isomorphisms;
                        }else if(alg_name == "lazyforwardchecking_low_degreeprune_ind"){

                                               lazyforwardchecking_low_degreeprune_ind(
                                                        pattern,
                                                        match,
                                                        [&count,&isomorphisms](auto const & S) {
                                                                ++count;
                                                                std::vector<int> iso;
                                                                for (int i=0; i<S.map.size(); ++i) {
                                                                        iso.push_back(S.map[i]+1);
                                                                }
                                                                isomorphisms.push_back(iso);

                                                                return true;
                                                        },
                                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "lazyforwardchecking_low_degreesequenceprune_ind"){

                                                        lazyforwardchecking_low_degreesequenceprune_ind(
                                                                        pattern,
                                                                        match,
                                                                        [&count,&isomorphisms](auto const & S) {
                                                                                ++count;
                                                                                std::vector<int> iso;
                                                                                for (int i=0; i<S.map.size(); ++i) {
                                                                                        iso.push_back(S.map[i]+1);
                                                                                }
                                                                                isomorphisms.push_back(iso);
                                                                                return true;
                                                                        },
                                                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "lazyforwardchecking_low_ind"){

                                                        lazyforwardchecking_low_ind(
                                                                pattern,
                                                                match,
                                                                [&count,&isomorphisms](auto const & S) {
                                                                        ++count;
                                                                        std::vector<int> iso;
                                                                        for (int i=0; i<S.map.size(); ++i) {
                                                                                iso.push_back(S.map[i]+1);
                                                                        }
                                                                        isomorphisms.push_back(iso);
                                                                        std::cout << std::endl;
                                                                        return true;
                                                                },
                                                                index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "lazyforwardchecking_low_parent_degreeprune_ind"){

                                                        lazyforwardchecking_low_parent_degreeprune_ind(
                                                                pattern,
                                                                match,
                                                                [&count,&isomorphisms](auto const & S) {
                                                                        ++count;
                                                                        std::vector<int> iso;
                                                                        for (int i=0; i<S.map.size(); ++i) {
                                                                                       iso.push_back(S.map[i]+1);
                                                                        }
                                                                        isomorphisms.push_back(iso);

                                                                        std::cout << std::endl;
                                                                        return true;
                                                                },
                                                                index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "lazyforwardchecking_low_parent_ind"){

                                                        lazyforwardchecking_low_parent_ind(
                                                                pattern,
                                                                match,
                                                                [&count,&isomorphisms](auto const & S) {
                                                                        ++count;
                                                                        std::vector<int> iso;
                                                                        for (int i=0; i<S.map.size(); ++i) {
                                                                                iso.push_back(S.map[i]+1);
                                                                        }
                                                                        isomorphisms.push_back(iso);

                                                                        std::cout << std::endl;
                                                                        return true;
                                                                },
                                                                index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "lazyforwardchecking_parent_degreeprune_ind"){

                                lazyforwardchecking_parent_degreeprune_ind(
                                pattern,
                                match,
                                [&count,&isomorphisms](auto const & S) {
                                        ++count;
                                        std::vector<int> iso;
                                        for (int i=0; i<S.map.size(); ++i) {
                                                iso.push_back(S.map[i]+1);
                                        }
                                        isomorphisms.push_back(iso);

                                        std::cout << std::endl;
                                        return true;
                                },
                                index_order_g);
                                return isomorphisms;

                        }else if(alg_name == "lazyforwardchecking_parent_degreesequenceprune_ind"){


                                                lazyforwardchecking_parent_degreesequenceprune_ind(
                                                        pattern,
                                                        match,
                                                        [&count,&isomorphisms](auto const & S) {
                                                                ++count;
                                                                std::vector<int> iso;
                                                                for (int i=0; i<S.map.size(); ++i) {
                                                                        iso.push_back(S.map[i]+1);
                                                                }
                                                                isomorphisms.push_back(iso);

                                                                std::cout << std::endl;
                                                                return true;
                                                        },
                                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "lazyforwardchecking_parent_ind"){


                                                lazyforwardchecking_parent_ind(
                                                        pattern,
                                                        match,
                                                        [&count,&isomorphisms](auto const & S) {
                                                                ++count;
                                                                std::vector<int> iso;
                                                                for (int i=0; i<S.map.size(); ++i) {
                                                                        iso.push_back(S.map[i]+1);
                                                                }
                                                                isomorphisms.push_back(iso);

                                                                std::cout << std::endl;
                                                                return true;
                                                        },
                                                        index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "lazyforwardcheckingbackjumping_low_bitset_degreeprune_ind"){

                                                lazyforwardcheckingbackjumping_low_bitset_degreeprune_ind(
                                                                pattern,
                                                                match,
                                                                [&count,&isomorphisms](auto const & S) {
                                                                        ++count;
                                                                        std::vector<int> iso;
                                                                        for (int i=0; i<S.map.size(); ++i) {
                                                                                iso.push_back(S.map[i]+1);
                                                                        }
                                                                        isomorphisms.push_back(iso);

                                                                        std::cout << std::endl;
                                                                        return true;
                                                                },
                                                                index_order_g);
                                return isomorphisms;
                        }else if(alg_name == "lazyforwardcheckingbackjumping_low_bitset_degreesequenceprune_ind"){

                                                        lazyforwardcheckingbackjumping_low_bitset_degreesequenceprune_ind(
                                                        pattern,
                                                        match,
                                                        [&count,&isomorphisms](auto const & S) {
                                                                ++count;
                                                                std::vector<int> iso;
                                                                for (int i=0; i<S.map.size(); ++i) {
                                                                        iso.push_back(S.map[i]+1);
                                                                }
                                                                isomorphisms.push_back(iso);

                                                                std::cout << std::endl;
                                                                return true;
                                                        },
                                                        index_order_g);

                        }


                         return isomorphisms;

               }





